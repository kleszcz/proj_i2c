`timescale 1ns / 1ps

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

	// Inputs
	reg wb_clk_i;
	reg wb_rst_i;
	reg arst_i;
	reg [2:0] wb_adr_i;
	reg [7:0] wb_dat_i;
	reg wb_we_i;
	reg wb_stb_i;
	reg wb_cyc_i;
	reg scl_pad_i;
	reg sda_pad_i;

	// Outputs
	wire [7:0] wb_dat_o;
	wire wb_ack_o;
	wire wb_inta_o;
	wire scl_pad_o;
	wire scl_padoen_o;
	wire sda_pad_o;
	wire sda_padoen_o;

	// Instantiate the Unit Under Test (UUT)
	i2c_master_top i2c_master (
		.wb_clk_i(wb_clk_i), 
		.wb_rst_i(wb_rst_i), 
		.arst_i(arst_i), 
		.wb_adr_i(wb_adr_i), 
		.wb_dat_i(wb_dat_i), 
		.wb_dat_o(wb_dat_o), 
		.wb_we_i(wb_we_i), 
		.wb_stb_i(wb_stb_i), 
		.wb_cyc_i(wb_cyc_i), 
		.wb_ack_o(wb_ack_o), 
		.wb_inta_o(wb_inta_o), 
		.scl_pad_i(scl_pad_i), 
		.scl_pad_o(scl_pad_o), 
		.scl_padoen_o(scl_padoen_o), 
		.sda_pad_i(sda_pad_i), 
		.sda_pad_o(sda_pad_o), 
		.sda_padoen_o(sda_padoen_o)
	);
	
	i2c_slave_model i2c_slave (
		.scl(scl),
		.sda(sda)
	);

	initial begin
		// Initialize Inputs
		wb_clk_i = 0;
		wb_rst_i = 0;
		arst_i = 0;
		wb_adr_i = 0;
		wb_dat_i = 0;
		wb_we_i = 0;
		wb_stb_i = 0;
		wb_cyc_i = 0;
		scl_pad_i = 0;
		sda_pad_i = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

