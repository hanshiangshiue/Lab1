`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:16:43 08/17/2015
// Design Name:   decoder2to4
// Module Name:   D:/decoder2to4/decoder2to4_test.v
// Project Name:  decoder2to4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder2to4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module decoder2to4_test;

	// Inputs
	reg [1:0] in;
	reg en;

	// Outputs
	wire [3:0] d;

	// Instantiate the Unit Under Test (UUT)
	decoder2to4 uut (
		.in(in), 
		.en(en), 
		.d(d)
	);

	initial begin
		// Initialize Inputs
		in = 0;
		en = 0;

		// Wait 100 ns for global reset to finish
		#100
		in=2'b10;
		en=0;
		
		#100
		in=2'b11;
		en=0;
		
		#100
		in=2'b00;
		en=1;
		
		#100
		in=2'b01;
		en=1;
		
		#100
		in=2'b10;
		en=1;
		
		#100
		in=2'b11;
		en=1;        
		// Add stimulus here

	end
      
endmodule

