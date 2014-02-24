`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:02:19 02/22/2014 
// Design Name: 
// Module Name:    i2c_fsm 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module i2c_fsm(
	input clk, rst, arst, start,
	output reg done,
	output reg[7:0] msb, 
	output reg[7:0] lsb,
	
	//i2c
	input scl_pad_i,
	output scl_pad_o,
	output scl_padoen_o,
	input sda_pad_i,
	output sda_pad_o,
	output sda_padoen_o
	
    );


// Inputs
	wire [15:0] prer_i = 16'h0064;
	wire [ 7:0] ctr_i  = 8'h80; 
	reg [ 7:0] txr_i  ;
	reg [ 7:0] txr_r  ;
	//reg [ 7:0] rxr_i  ;
	reg [ 7:0] cr_i   ;
	reg [ 7:0] cr_r   ;
	//reg [ 7:0] sr_i   ;
	reg cs_i;

	// Outputs
//	wire[15:0] prer_o;
//	wire[ 7:0] ctr_o;
//	wire[ 7:0] txr_o;
	wire[ 7:0] rxr_o;
//	wire[ 7:0] cr_o;
	wire[ 7:0] sr_o;
	
	wire ack_o;
	
	
	// Instantiate the Unit Under Test (UUT)
	i2c_master_top i2c_master (
		.wb_clk_i(clk), 
		.wb_rst_i(rst), 
		.arst_i(arst), 

		.prer_i(prer_i),
		.ctr_i(ctr_i)  ,
		.txr_i(txr_i)  ,
		.rxr_i(/*rxr_i*/{8{GND}})  ,
		.cr_i(cr_i)   ,
		.sr_i(/*sr_i*/{8{GND}})   ,
		
		.prer_o(/*prer_o*/),
		.ctr_o(/*ctr_o*/),
		.txr_o(/*txr_o*/),
		.rxr_o(rxr_o),
		.cr_o(/*cr_o*/),
		.sr_o(sr_o),
	
		.cs_i(cs_i),
		.ack_o(ack_o),
	
		.scl_pad_i(scl_pad_i), 
		.scl_pad_o(scl_pad_o), 
		.scl_padoen_o(scl_padoen_o), 
		.sda_pad_i(sda_pad_i), 
		.sda_pad_o(sda_pad_o), 
		.sda_padoen_o(sda_padoen_o)
	);
	
	
	

reg[3:0] state, nx_state, tip_state, tip_state_r;

parameter 	IDLE  = 4'b0000,
				INIT  = 4'b0001,
				START = 4'b0010,
				STACK = 4'b0011,				
				READ1 = 4'b0100,
				R1ACK = 4'b0101,				
				READ2 = 4'b0110,
				R2ACK = 4'b0111,
				TIP 	= 4'b1000,
				INACK = 4'b1001,
				ENABLE= 4'b1010,
				ENACK = 4'b1011,
				TIPACK= 4'b1100,
				R1END = 4'b1101,
				R2END = 4'b1110;
				
parameter RD      = 1'b1;
parameter WR      = 1'b0;
parameter SADR    = 7'b1001_111;
				
always @ (posedge clk or negedge arst)
if(!arst)
begin
	state <= INIT;	
end
else if(rst)
begin
	state <= INIT;
end
else
begin
	state <= nx_state;
end

reg txr, cr, tip;

always @ *
if(!arst)
begin
	nx_state = IDLE;
	tip_state_r = IDLE;
	txr_r = 8'h00;
	cr_r = 8'h00;
	cs_i = 1'b0;
	txr = 1'b0;
	cr = 1'b0;
	tip = 1'b0;
end
else if(rst)
begin	
	nx_state = IDLE;
	tip_state_r = IDLE;
	txr_r = 8'h00;
	cr_r = 8'h00;
	cs_i = 1'b0;
	txr = 1'b0;
	cr = 1'b0;
	tip = 1'b0;
end
else
begin
	nx_state = state;
	tip_state_r = IDLE;
	txr_r = 8'h00;
	cr_r = 8'h00;
	txr = 1'b0;
	cr = 1'b0;
	tip = 1'b0;
	case(state)
		IDLE:
		begin
			cs_i = 1'b0;
			nx_state = IDLE;
			if(start)
			begin				
				nx_state = START;
			end
		end
		INIT:
		begin
			cs_i = 1'b1;
			nx_state = INACK;
		end	
		INACK:
		begin
			if(~ack_o)
			begin
				cs_i = 1'b1;
				nx_state = INACK;				
			end
			else
			begin
				cs_i = 1'b0;
				nx_state = ENABLE;
			end
		end	
		ENABLE:
		begin
			cs_i = 1'b1;
			nx_state = ENACK;
		end	
		ENACK:
		begin		
			if(~ack_o)
			begin
				cs_i = 1'b1;
				nx_state = ENACK;	
			end
			else
			begin
				cs_i = 1'b0;
				nx_state = IDLE;
			end
		end			
		START:
		begin
			cs_i = 1'b1;
			txr_r = {SADR,RD};
			cr_r = 8'h90;
			txr = 1'b1;
			cr = 1'b1;
			tip = 1'b1;
			nx_state = STACK;
			tip_state_r = READ1;
		end
		STACK:
		begin
			if(~ack_o)
			begin
				cs_i = 1'b1;
				nx_state = STACK;	
			end
			else
			begin
				cs_i = 1'b0;
				nx_state = TIPACK;
			end
		end
		READ1:
		begin
			cs_i = 1'b1;
			cr_r = 8'h20;
			cr = 1'b1;
			tip = 1'b1;
			nx_state = R1ACK;
			tip_state_r = R1END;
		end
		R1ACK:
		begin
			if(~ack_o)
			begin
				cs_i = 1'b1;
				nx_state = R1ACK;	
			end
			else
			begin
				cs_i = 1'b0;
				nx_state = TIPACK;
			end
		end
		R1END:
		begin
			cs_i = 1'b0;
			nx_state = READ2;
		end
		READ2:
		begin
			cs_i = 1'b1;
			cr_r = 8'h60;
			cr = 1'b1;
			tip = 1'b1;
			nx_state = R2ACK;
			tip_state_r = R2END;
		end
		R2ACK:
		begin
			if(~ack_o)
			begin
				cs_i = 1'b1;
				nx_state = R2ACK;	
			end
			else
			begin
				cs_i = 1'b0;
				nx_state = TIPACK;
			end
		end	
		R2END:
		begin
			cs_i = 1'b0;
			nx_state = IDLE;
		end
		TIP:
		begin
			cs_i = 1'b0;
			if(sr_o[1]) 
				nx_state = TIP;
			else
				nx_state = tip_state;
		end
		TIPACK:
		begin
			if(~ack_o)
			begin
				cs_i = 1'b1;
				nx_state = TIPACK;	
			end
			else
			begin
				cs_i = 1'b0;
				nx_state = TIP;
			end
		end
		
	endcase
end

// handle recieved values
always @ (posedge clk or negedge arst)
begin
	if(!arst)
	begin
		msb <= 8'h00;
		lsb <= 8'h00;
		done <= 1'b0;
	end
	else if(rst)
	begin
		msb <= 8'h00;
		lsb <= 8'h00;
		done <= 1'b0;
	end
	else
	begin
		done <= 1'b0;
		if(state == R1END)
			msb <= rxr_o;
		else if(state == R2END)
		begin
			lsb <= rxr_o;
			done <= 1'b1;
		end
		else
		begin
			msb <= msb;
			lsb <= lsb;
		end
	end
end


always @ (posedge clk or negedge arst)
begin
	if(!arst)
	begin
		txr_i <= 8'h00;
		cr_i <= 8'h00;
		tip_state <= 4'h0;
	end
	else if(rst)
	begin
		txr_i <= 8'h00;
		cr_i <= 8'h00;
		tip_state <= 4'h0;
	end
	else
	begin
		if(txr)
			txr_i <= txr_r;
		if(cr)
			cr_i <= cr_r;
		if(tip)
			tip_state <= tip_state_r;
	end
end


endmodule
