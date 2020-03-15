`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:18:21 03/29/2015
// Design Name:   rm
// Module Name:   D:/FinalMUTThesis/Final/RMDCT/tf_dct.v
// Project Name:  RMDCT
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: rm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tf_dct;

	// Inputs
	reg [31:0] i0;
	reg [31:0] i1;
	reg [31:0] i2;
	reg [31:0] i3;
	reg [31:0] i4;
	reg [31:0] i5;
	reg [31:0] i6;
	reg [31:0] i7;
	reg reset;
	reg clk;
	reg en;

	// Outputs
	wire [31:0] o0;
	wire [31:0] o1;
	wire [31:0] o2;
	wire [31:0] o3;
	wire [31:0] o4;
	wire [31:0] o5;
	wire [31:0] o6;
	wire [31:0] o7;

	// Instantiate the Unit Under Test (UUT)
	rm uut (
		.i0(i0), 
		.i1(i1), 
		.i2(i2), 
		.i3(i3), 
		.i4(i4), 
		.i5(i5), 
		.i6(i6), 
		.i7(i7), 
		.o0(o0), 
		.o1(o1), 
		.o2(o2), 
		.o3(o3), 
		.o4(o4), 
		.o5(o5), 
		.o6(o6), 
		.o7(o7), 
		.reset(reset), 
		.clk(clk), 
		.en(en)
	);
	always begin 
		clk <= 1'b1;
		#50;
		clk <= 1'b0;
		#50;
	end
	
	integer dct_in_file;
	integer dct_out_file;
    integer i;
	reg [31:0] DctData[63:0];
	reg [31:0] DctResult[63:0];
	initial begin
		for(i=0;i<64;i=i+1) 
			DctData[i] =0;
		reset = 1;
		en = 0;
		#100;
		reset = 0;
		en = 1;
        dct_in_file = $fopen("DCT_Input_Data.bin", "r");// Open DCT_Input_Data.bin for reading
		dct_out_file = $fopen("DCT_Result_Data.bin", "w");// Open file DCT_Result_Data for writing	
		for(i=0;i<64;i=i+1) 
			$fscanf(dct_in_file,"%h" ,DctData[i]);
		$fclose(dct_in_file);
		#(500*8+100);//Wait for DCT Operation Complete 
		for(i=0;i<64;i=i+1) 
			$fwrite(dct_out_file, "%h\n", DctResult[i]);
		$fclose(dct_out_file);
	end	
	
	integer j=0;
	initial begin
		i0 = 0;
		i1 = 0;
		i2 = 0;
		i3 = 0;
		i4 = 0;
		i5 = 0;
		i6 = 0;
		i7 = 0;
		for(i=0;i<64;i=i+1) 
			DctResult[i] =0;	
		#100;
		for(j=0;j<8;j=j+1) begin 
			i0 = DctData[8*j];
			i1 = DctData[8*j+1];
			i2 = DctData[8*j+2];
			i3 = DctData[8*j+3];
			i4 = DctData[8*j+4];
			i5 = DctData[8*j+5];
			i6 = DctData[8*j+6];
			i7 = DctData[8*j+7];
			#500;
			DctResult[8*j]   = o0;
			DctResult[8*j+1] = o1;
			DctResult[8*j+2] = o2;
			DctResult[8*j+3] = o3;
			DctResult[8*j+4] = o4;
			DctResult[8*j+5] = o5;
			DctResult[8*j+6] = o6;
			DctResult[8*j+7] = o7;
		end
	end
endmodule

