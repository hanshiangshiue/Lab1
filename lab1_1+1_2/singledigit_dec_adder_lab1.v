`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:24:09 08/17/2015 
// Design Name: 
// Module Name:    singledigit_dec_adder_lab1 
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
module singledigit_dec_adder_lab1(

    input [3:0] A,
	 input [3:0] B,
    input ci,
    output [3:0] s,
    output co
	 );


reg [3:0] s;
reg co;
reg k;
reg [3:0] z;


always@(A or B or ci)
begin
	{k,z}=A+B+ci;
end



always@(k or z)
begin
	if({k,z}>9)
		{co,s}={k,z}+5'b00110;
	else
		{co,s}={k,z};
end


endmodule