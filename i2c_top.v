`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:34:43 02/23/2014 
// Design Name: 
// Module Name:    i2c_top 
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
module i2c_top(
    input clk,
    input rst,
    input hi,
	 input lo,
    output [7:0] led,
    inout scl,
    inout sda
    );

	reg [7:0] led_r, msb_r, lsb_r;
	reg start;

	wire arst = 1'b1;

	// Outputs
	wire done;
	wire [7:0] msb;
	wire [7:0] lsb;
	wire scl_pad_o;
	wire scl_padoen_o;
	wire sda_pad_o;
	wire sda_padoen_o;
	
//	delay m_scl(scl_padoen_o ? 1'bz : scl_pad_o, scl);
//	delay m_sda(sda_padoen_o ? 1'bz : sda_pad_o, sda);


	assign scl = scl_padoen_o ? 1'bz : scl_pad_o;
	assign sda = sda_padoen_o ? 1'bz : sda_pad_o;
//	pullup (scl);
//	pullup (sda);
	
	assign led = led_r;

	// Instantiate the Unit Under Test (UUT)
	i2c_fsm i2c (
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
	
	always @ (posedge clk)
	if(rst)
	begin
		start <= 1'b0;
		led_r <= 8'h00;	
	end
	else
	begin
		if(hi)
		begin
			start <= 1'b1;
			led_r <= 8'haa;
		end
		if(done)
		begin
			start <= 1'b0;
			led_r <= msb_r;
		end
		if(lo && !start)
			led_r <= lsb_r;
	end

always @ (posedge clk)
	if(rst)
	begin
		msb_r <= 8'h00;
		lsb_r <= 8'h00;	
	end
	else
	begin
		msb_r <= msb;
		lsb_r <= lsb;
	end
endmodule
