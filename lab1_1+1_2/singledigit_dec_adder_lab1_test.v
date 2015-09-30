`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:27:21 08/17/2015
// Design Name:   singledigit_dec_adder_lab1
// Module Name:   D:/singledigit_dec_adder_lab1/singledigit_dec_adder_lab1_test.v
// Project Name:  singledigit_dec_adder_lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: singledigit_dec_adder_lab1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module singledigit_dec_adder_lab1_test;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg ci;

	// Outputs
	wire [3:0] s;
	wire co;

	// Instantiate the Unit Under Test (UUT)
	singledigit_dec_adder_lab1 uut (
		.A(A), 
		.B(B), 
		.ci(ci), 
		.s(s), 
		.co(co)
	);

	initial begin
		// Initialize Inputs
		A = 4'd0;
		B = 4'd0;
		ci = 1'd0;

		// Wait 100 ns for global reset to finish
		#100
		A=4'd3;
		B=4'd2;
		ci=1'd0;
		
		#100
		A=4'd3;
		B=4'd2;
		ci=1'd0;
		
		
		#100
		A=4'd3;
		B=4'd2;
		ci=1'd1;
		
		
		
		#100
		A=4'd5;
		B=4'd8;
		ci=1'd0;
		
		
		
		#100
		A=4'd5;
		B=4'd8;
		ci=1'd1;
      
		
		// Add stimulus here

	end
      
endmodule

