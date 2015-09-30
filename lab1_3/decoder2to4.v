`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:02:24 08/17/2015 
// Design Name: 
// Module Name:    decoder2to4 
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
module decoder2to4(
    input [1:0] in,
    input en,
    output [3:0] d
    );

reg [3:0] d;


always@(in or en)
begin
	if(en==0)
		d=4'b0000;
	else
	begin
		case(in)
		2'b00: d=4'b0001;
		2'b01: d=4'b0010;
		2'b10: d=4'b0100;
		2'b11: d=4'b1000;
		default: d=4'b0000;
		endcase
	end
end


endmodule
