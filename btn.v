`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:11:39 02/23/2014 
// Design Name: 
// Module Name:    btn 
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
module btn(
    input CLK_50M,
    input BTN_SOUTH,
    input BTN_NORTH,
    output [7:0] led
    );

reg [7:0] led_r;

assign led = led_r;

always @ (posedge CLK_50M)
if(BTN_SOUTH)
	led_r <= 8'h00;
else
begin
	if(BTN_NORTH)
		led_r <= led_r + 8'h01;
end
	
endmodule
