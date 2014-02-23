`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:15:02 02/23/2014 
// Design Name: 
// Module Name:    tmp 
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
module tmp(
    input clk,
    input rst,
	 output reg r
    );

always @ (posedge clk)
if(rst)
	r <= 1'b0;
else
	r <= r;

endmodule
