`timescale 1ns / 10ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:15:14 01/20/2014
// Design Name:   i2c_master_top
// Module Name:   /home/lab_cpu/kleszcz_ma_dwadziescia_rak/proj_i2c/tb.v
// Project Name:  proj_i2c
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: i2c_master_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	parameter RD      = 1'b1;
	parameter WR      = 1'b0;
	parameter SADR    = 7'b0010_000;

	// Inputs
	reg clk;
	reg wb_rst_i;
	reg arst_i;
	reg [15:0] prer_i ;
	reg [ 7:0] ctr_i  ;
	reg [ 7:0] txr_i  ;
	reg [ 7:0] rxr_i  ;
	reg [ 7:0] cr_i   ;
	reg [ 7:0] sr_i   ;
	reg cs_i;

	// Outputs
	wire[15:0] prer_o;
	wire[ 7:0] ctr_o;
	wire[ 7:0] txr_o;
	wire[ 7:0] rxr_o;
	wire[ 7:0] cr_o;
	wire[ 7:0] sr_o;
	
	wire ack_o;
	wire scl_pad_o;
	wire scl_padoen_o;
	wire sda_pad_o;
	wire sda_padoen_o;
	

	
	delay m_scl(scl_padoen_o ? 1'bz : scl_pad_o, scl);
	delay m_sda(sda_padoen_o ? 1'bz : sda_pad_o, sda);

	pullup (scl);
	pullup (sda);
	
	// Instantiate the Unit Under Test (UUT)
	i2c_master_top i2c_master (
		.wb_clk_i(clk), 
		.wb_rst_i(wb_rst_i), 
		.arst_i(arst_i), 

		.prer_i(prer_i),
		.ctr_i(ctr_i)  ,
		.txr_i(txr_i)  ,
		.rxr_i(rxr_i)  ,
		.cr_i(cr_i)   ,
		.sr_i(sr_i)   ,
		
		.prer_o(prer_o),
		.ctr_o(ctr_o),
		.txr_o(txr_o),
		.rxr_o(rxr_o),
		.cr_o(cr_o),
		.sr_o(sr_o),
	
		.cs_i(cs_i),
		.ack_o(ack_o),
	
		.scl_pad_i(scl), 
		.scl_pad_o(scl_pad_o), 
		.scl_padoen_o(scl_padoen_o), 
		.sda_pad_i(sda), 
		.sda_pad_o(sda_pad_o), 
		.sda_padoen_o(sda_padoen_o)
	);
	
	i2c_slave_model i2c_slave (
		.scl(scl),
		.sda(sda)
	);

	initial begin
	//force i2c_slave.debug = 1'b0;
	
		// Initialize Inputs
		clk = 0;
		wb_rst_i = 0;
		arst_i = 0;
		prer_i = 0;
		ctr_i = 0;
		txr_i = 0;
		rxr_i = 0;
		cr_i = 0;
		sr_i = 0;
		cs_i = 0;
		

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		$display("\nstatus: %t Testbench started\n\n", $time);
		
		#2 arst_i = 0;
		repeat(10) @(posedge clk);
		arst_i = 1;
		$display("status: %t done reset", $time);
		
		
		// program prer
	/*	@(posedge clk); 
		#1 cs_i = 1'b1;
		prer_i = 16'h00fa;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		*/
		
		@(posedge clk) 
		#1 cs_i = 1'b1;
		prer_i = 16'h00c8;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		
		//enable core
		@(posedge clk) 
		#1 cs_i = 1'b1;
		ctr_i = 8'h80;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		
		
		//send slave addr
		@(posedge clk) 
		#1 cs_i = 1'b1;
		txr_i = {SADR,WR};
		cr_i = 8'h90;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		
	/*	#1 cs_i = 1'b1;
		cr_i = 8'h90;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
	*/	
		$display("status: %t generate 'start', write cmd %0h (slave address+write)", $time, {SADR,WR} );
	
		// wait for tip == 0;
		@(posedge clk) 
		#1 cs_i = 1'b1;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		while(sr_o[1]) @(posedge clk);
		$display("status: %t tip==0", $time);
		
		//send mem addr
		@(posedge clk) 
		#1 cs_i = 1'b1;
		txr_i = 8'h01;
		cr_i = 8'h10;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
	/*	
		#1 cs_i = 1'b1;
		cr_i = 8'h10;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		*/
		$display("status: %t write slave memory address 01", $time);
		
		
		// wait for tip == 0;
		@(posedge clk) 
		#1 cs_i = 1'b1;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		while(sr_o[1]) @(posedge clk);
		$display("status: %t tip==0", $time);
		
		
		// send memory contents
		@(posedge clk) 
		#1 cs_i = 1'b1;
		txr_i = 8'ha5;
		cr_i = 8'h10;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		/*
		#1 cs_i = 1'b1;
		cr_i = 8'h10;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		*/
		$display("status: %t write data a5", $time);
		
/*		while (scl) #1;
		force scl= 1'b0;
		#100000;
		release scl;
*/
		// wait for tip == 0;
		@(posedge clk) 
		#1 cs_i = 1'b1;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		while(sr_o[1]) @(posedge clk);
		$display("status: %t tip==0", $time);


// send memory contents
		@(posedge clk) 
		#1 cs_i = 1'b1;
		txr_i = 8'h5a;
		cr_i = 8'h50;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		/*
		#1 cs_i = 1'b1;
		cr_i = 8'h50;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		*/
		 $display("status: %t write next data 5a, generate 'stop'", $time);
		

		// wait for tip == 0;
		@(posedge clk) 
		#1 cs_i = 1'b1;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		while(sr_o[1]) @(posedge clk);
		$display("status: %t tip==0", $time);
		
		
	
		
		//READ
		
		//send slave addr
		@(posedge clk) 
		#1 cs_i = 1'b1;
		txr_i = {SADR,WR};
		cr_i = 8'h90;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		/*
		#1 cs_i = 1'b1;
		cr_i = 8'h90;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		*/
		$display("status: %t generate 'start', write cmd %0h (slave address+write)", $time, {SADR,WR} );
	
		// wait for tip == 0;
		@(posedge clk) 
		#1 cs_i = 1'b1;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		while(sr_o[1]) @(posedge clk);
		$display("status: %t tip==0", $time);
		
		//send mem addr
		@(posedge clk) 
		#1 cs_i = 1'b1;
		txr_i = 8'h01;
		cr_i = 8'h10;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		
		/*#1 cs_i = 1'b1;
		cr_i = 8'h10;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		*/
		$display("status: %t write slave memory address 01", $time);
		
		
		// wait for tip == 0;
		@(posedge clk) 
		#1 cs_i = 1'b1;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		while(sr_o[1]) @(posedge clk);
		$display("status: %t tip==0", $time);
		
		//restart send slave addr
		@(posedge clk) 
		#1 cs_i = 1'b1;
		txr_i = {SADR,RD};
		cr_i = 8'h90;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		/*
		#1 cs_i = 1'b1;
		cr_i = 8'h90;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		*/
		$display("status: %t generate 'repeated start', write cmd %0h (slave address+read)", $time, {SADR,RD} );
		
		// wait for tip == 0;
		@(posedge clk) 
		#1 cs_i = 1'b1;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		while(sr_o[1]) @(posedge clk);
		$display("status: %t tip==0", $time);
		
		@(posedge clk) 
		#1 cs_i = 1'b1;
		cr_i = 8'h20;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		$display("status: %t read + ack", $time);
		
		// wait for tip == 0;
		@(posedge clk) 
		#1 cs_i = 1'b1;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		while(sr_o[1]) @(posedge clk);
		$display("status: %t tip==0", $time);
		
		
		//read data
		// wait for tip == 0;
		@(posedge clk) 
		#1 cs_i = 1'b1;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		if(rxr_o !== 8'ha5)
	        $display("\nERROR: Expected a5, received %x at time %t", rxr_o, $time);
	      else
	        $display("status: %t received %x", $time, rxr_o);
		
		@(posedge clk) 
		#1 cs_i = 1'b1;
		cr_i = 8'h20;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		$display("status: %t read + ack", $time);
		
		// wait for tip == 0;
		@(posedge clk) 
		#1 cs_i = 1'b1;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		while(sr_o[1]) @(posedge clk);
		$display("status: %t tip==0", $time);
		
		
		//read data
		// wait for tip == 0;
		@(posedge clk) 
		#1 cs_i = 1'b1;
		@(posedge clk); 
		while(~ack_o) @(posedge clk); // wait for ack
		#1 cs_i = 1'b0;
		if(rxr_o !== 8'h5a)
	        $display("\nERROR: Expected 5a, received %x at time %t", rxr_o, $time);
	      else
	        $display("status: %t received %x", $time, rxr_o);
		#100
		$display("status: %t Testbench done", $time);
		$finish;
		
	end
	
	always 
		#5 clk = !clk;
      
endmodule