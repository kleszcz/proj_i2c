`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:18:18 02/23/2014
// Design Name:   tmp
// Module Name:   C:/Users/Jan/Documents/GitHub/proj_i2c/tmptb.v
// Project Name:  proj_i2c
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: tmp
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tmptb;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire r;

	// Instantiate the Unit Under Test (UUT)
	tmp uut (
		.clk(clk), 
		.rst(rst), 
		.r(r)
	);

	always 
		#1 clk <= !clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;

		#4 rst = 0;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

