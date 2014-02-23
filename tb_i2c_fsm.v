`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:44:30 02/23/2014
// Design Name:   i2c_fsm
// Module Name:   C:/Users/Jan/Documents/GitHub/proj_i2c/tb_i2c_fsm.v
// Project Name:  proj_i2c
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: i2c_fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_i2c_fsm;

	// Inputs
	reg clk;
	reg rst;
	reg arst;
	reg start;
	reg scl_pad_i;
	reg sda_pad_i;

	// Outputs
	wire done;
	wire [7:0] msb;
	wire [7:0] lsb;
	wire scl_pad_o;
	wire scl_padoen_o;
	wire sda_pad_o;
	wire sda_padoen_o;
	
	wire scl, sda;
	
	delay m_scl(scl_padoen_o ? 1'bz : scl_pad_o, scl);
	delay m_sda(sda_padoen_o ? 1'bz : sda_pad_o, sda);

	pullup (scl);
	pullup (sda);

	// Instantiate the Unit Under Test (UUT)
	i2c_fsm uut (
		.clk(clk), 
		.rst(rst), 
		.arst(arst), 
		.start(start), 
		.done(done), 
		.msb(msb), 
		.lsb(lsb), 
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
		// Initialize Inputs
		clk = 0;
		rst = 0;
		arst = 1;
		start = 0;
		scl_pad_i = 0;
		sda_pad_i = 0;

		// Wait 100 ns for global reset to finish
		#100;
		#10 arst = 0;
		#50 arst = 1;
		#10 start = 1;
		
		while(!done) @(posedge clk);
		
		#100 $finish;
        
		// Add stimulus here

	end
	
	
	always 
		#10 clk = !clk;
      
endmodule

module delay (in, out);
  input  in;
  output out;

  assign out = in;

  specify
    (in => out) = (600,600);
  endspecify
endmodule