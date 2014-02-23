// synopsys translate_off
`include "timescale.v"
// synopsys translate_on

`include "i2c_master_defines.v"

module i2c_master_top(
	input wb_clk_i, wb_rst_i, arst_i,	
	input [15:0] prer_i ,
	input [ 7:0] ctr_i  ,
	input [ 7:0] txr_i  ,
	input [ 7:0] rxr_i  ,
	input [ 7:0] cr_i   ,
	input [ 7:0] sr_i   ,	
	output reg[15:0] prer_o,
	output reg[ 7:0] ctr_o,
	output reg[ 7:0] txr_o,
	output reg[ 7:0] rxr_o,
	output reg[ 7:0] cr_o,
	output reg[ 7:0] sr_o,
	input cs_i, //FIXME I don't like the name - too often as chip select, here fo cyc & stb from wishbone.
	output reg ack_o,
	input  scl_pad_i,
	output scl_pad_o, scl_padoen_o,
	input  sda_pad_i,
	output sda_pad_o, sda_padoen_o
	);

	// parameters
	parameter ARST_LVL = 1'b0; // asynchronous reset level

	//
	// variable declarations
	//

	// registers
	reg  [15:0] prer; // clock prescale register
	reg  [ 7:0] ctr;  // control register
	reg  [ 7:0] txr;  // transmit register
	wire [ 7:0] rxr;  // receive register
	reg  [ 7:0] cr;   // command register
	wire [ 7:0] sr;   // status register

	// done signal: command completed, clear command register
	wire done;

	// core enable signal
	wire core_en;
	wire ien;

	// status register signals
	wire irxack;
	reg  rxack;       // received aknowledge from slave
	reg  tip;         // transfer in progress
	reg  irq_flag;    // interrupt pending flag
	wire i2c_busy;    // bus busy (start signal detected)
	wire i2c_al;      // i2c bus arbitration lost
	reg  al;          // status register arbitration lost bit

	//
	// module body
	//

	// generate internal reset
	wire rst_i = arst_i ^ ARST_LVL;

	// generate wishbone signals
	//wire wb_wacc = wb_we_i & wb_ack_o;
	wire wb_wacc = ack_o;

	// generate acknowledge output signal
	always @(posedge wb_clk_i)
	  ack_o <= cs_i & ~ack_o; // because timing is always honored

/*	// assign DAT_O
	always @(posedge wb_clk_i)
	begin
	  case (wb_adr_i) // synopsys parallel_case
	    3'b000: wb_dat_o <= #1 prer[ 7:0];
	    3'b001: wb_dat_o <= #1 prer[15:8];
	    3'b010: wb_dat_o <= #1 ctr;
	    3'b011: wb_dat_o <= #1 rxr; // write is transmit register (txr)
	    3'b100: wb_dat_o <= #1 sr;  // write is command register (cr)
	    3'b101: wb_dat_o <= #1 txr;
	    3'b110: wb_dat_o <= #1 cr;
	    3'b111: wb_dat_o <= #1 0;   // reserved
	  endcase
	end
*/
always @(posedge wb_clk_i)
	begin
		prer_o <= prer; 
		ctr_o  <=  ctr;  
		txr_o  <=  txr;  
		rxr_o  <=  rxr;  
		cr_o   <=   cr;   
		sr_o   <=   sr;
	end
	
always @(posedge wb_clk_i)
	  if (!rst_i)
	    begin
	        prer <= 16'hffff;
	        ctr  <= 8'h0;
	        txr  <= 8'h0;
	    end
	  else if (wb_rst_i)
	    begin
	        prer <= 16'hffff;
	        ctr  <= 8'h0;
	        txr  <= 8'h0;
	    end
	  else
	begin
		prer <= prer_i; 
		ctr  <=  ctr_i;  
		txr  <=  txr_i;  
	end
/*	// generate registers
	always @(posedge wb_clk_i or negedge rst_i)
	  if (!rst_i)
	    begin
	        prer <= #1 16'hffff;
	        ctr  <= #1  8'h0;
	        txr  <= #1  8'h0;
	    end
	  else if (wb_rst_i)
	    begin
	        prer <= #1 16'hffff;
	        ctr  <= #1  8'h0;
	        txr  <= #1  8'h0;
	    end
	  else
	    if (wb_wacc)
	      case (wb_adr_i) // synopsys parallel_case
	         3'b000 : prer [ 7:0] <= #1 wb_dat_i;
	         3'b001 : prer [15:8] <= #1 wb_dat_i;
	         3'b010 : ctr         <= #1 wb_dat_i;
	         3'b011 : txr         <= #1 wb_dat_i;
	         default: ;
	      endcase
*/
	// generate command register (special case)
	always @(posedge wb_clk_i or negedge rst_i)
	  if (!rst_i)
	    cr <= 8'h0;
	  else if (wb_rst_i)
	    cr <= 8'h0;
	  else if (wb_wacc)
	    begin
	        if (core_en)
	          cr <= cr_i;
	    end
	  else
	    begin
	        if (done | i2c_al)
	          cr[7:4] <= 4'h0;           // clear command bits when done
	                                        // or when aribitration lost
	        cr[2:1] <= 2'b0;             // reserved bits
	        cr[0]   <= 1'b0;             // clear IRQ_ACK bit
	    end


	// decode command register
	wire sta  = cr[7];
	wire sto  = cr[6];
	wire rd   = cr[5];
	wire wr   = cr[4];
	wire ack  = cr[3];
	wire iack = cr[0];

	// decode control register
	assign core_en = ctr[7];
	assign ien = ctr[6];

	// hookup byte controller block
	i2c_master_byte_ctrl byte_controller (
		.clk      ( wb_clk_i     ),
		.rst      ( wb_rst_i     ),
		.nReset   ( rst_i        ),
		.ena      ( core_en      ),
		.clk_cnt  ( prer         ),
		.start    ( sta          ),
		.stop     ( sto          ),
		.read     ( rd           ),
		.write    ( wr           ),
		.ack_in   ( ack          ),
		.din      ( txr          ),
		.cmd_ack  ( done         ),
		.ack_out  ( irxack       ),
		.dout     ( rxr          ),
		.i2c_busy ( i2c_busy     ),
		.i2c_al   ( i2c_al       ),
		.scl_i    ( scl_pad_i    ),
		.scl_o    ( scl_pad_o    ),
		.scl_oen  ( scl_padoen_o ),
		.sda_i    ( sda_pad_i    ),
		.sda_o    ( sda_pad_o    ),
		.sda_oen  ( sda_padoen_o )
	);

	// status register block + interrupt request signal
	always @(posedge wb_clk_i or negedge rst_i)
	  if (!rst_i)
	    begin
	        al       <= 1'b0;
	        rxack    <= 1'b0;
	        tip      <= 1'b0;
	        irq_flag <= 1'b0;
	    end
	  else if (wb_rst_i)
	    begin
	        al       <= 1'b0;
	        rxack    <= 1'b0;
	        tip      <= 1'b0;
	        irq_flag <= 1'b0;
	    end
	  else
	    begin
	        al       <= i2c_al | (al & ~sta);
	        rxack    <= irxack;
	        tip      <= (rd | wr);
	        irq_flag <= (done | i2c_al | irq_flag) & ~iack; // interrupt request flag is always generated
	    end
/*
	// generate interrupt request signals
	always @(posedge wb_clk_i or negedge rst_i)
	  if (!rst_i)
	    wb_inta_o <= #1 1'b0;
	  else if (wb_rst_i)
	    wb_inta_o <= #1 1'b0;
	  else
	    wb_inta_o <= #1 irq_flag && ien; // interrupt signal is only generated when IEN (interrupt enable bit is set)
*/
	// assign status register bits
	assign sr[7]   = rxack;
	assign sr[6]   = i2c_busy;
	assign sr[5]   = al;
	assign sr[4:2] = 3'h0; // reserved
	assign sr[1]   = tip;
	assign sr[0]   = irq_flag;

endmodule
