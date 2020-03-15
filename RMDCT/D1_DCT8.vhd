----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:58:59 05/14/2014 
-- Design Name: 
-- Module Name:    D1_DCT8 - structural 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity rm is
	Port ( i0 : in  STD_LOGIC_VECTOR (31 downto 0);
           i1 : in  STD_LOGIC_VECTOR (31 downto 0);
           i2 : in  STD_LOGIC_VECTOR (31 downto 0);
           i3 : in  STD_LOGIC_VECTOR (31 downto 0);
           i4 : in  STD_LOGIC_VECTOR (31 downto 0);
           i5 : in  STD_LOGIC_VECTOR (31 downto 0);
           i6 : in  STD_LOGIC_VECTOR (31 downto 0);
           i7 : in  STD_LOGIC_VECTOR (31 downto 0);
           o0 : out  STD_LOGIC_VECTOR (31 downto 0);
           o1 : out  STD_LOGIC_VECTOR (31 downto 0);
           o2 : out  STD_LOGIC_VECTOR (31 downto 0);
           o3 : out  STD_LOGIC_VECTOR (31 downto 0);
           o4 : out  STD_LOGIC_VECTOR (31 downto 0);
           o5 : out  STD_LOGIC_VECTOR (31 downto 0);
           o6 : out  STD_LOGIC_VECTOR (31 downto 0);
           o7 : out  STD_LOGIC_VECTOR (31 downto 0);
			  reset,clk,en:in std_logic);
end rm;

architecture structural of rm is
	signal mid0_0,mid1_0,mid2_0,mid3_0,mid4_0,mid5_0,mid6_0,mid7_0: std_logic_vector(31 downto 0);
	signal mid0_1,mid1_1,mid2_1,mid3_1,mid4_1,mid5_1,mid6_1,mid7_1: std_logic_vector(31 downto 0);
	signal mid0_2,mid1_2,mid2_2,mid3_2,mid4_2,mid5_2,mid6_2,mid7_2: std_logic_vector(31 downto 0);
	signal mid0_3,mid1_3,mid2_3,mid3_3,mid4_3,mid5_3,mid6_3,mid7_3: std_logic_vector(31 downto 0);
	signal mid0_4,mid1_4,mid2_4,mid3_4,mid4_4,mid5_4,mid6_4,mid7_4: std_logic_vector(31 downto 0);
	signal mid0_5,mid1_5,mid2_5,mid3_5,mid4_5,mid5_5,mid6_5,mid7_5: std_logic_vector(31 downto 0);
	signal mid0_6,mid1_6,mid2_6,mid3_6,mid4_6,mid5_6,mid6_6,mid7_6: std_logic_vector(31 downto 0);
	signal mid0_7,mid1_7,mid2_7,mid3_7,mid4_7,mid5_7,mid6_7,mid7_7: std_logic_vector(31 downto 0);
--	signal mid0_8,mid1_8,mid2_8,mid3_8,mid4_8,mid5_8,mid6_8,mid7_8: std_logic_vector(31 downto 0);
--	signal mid0_9,mid1_9,mid2_9,mid3_9,mid4_9,mid5_9,mid6_9,mid7_9: std_logic_vector(31 downto 0);
begin
	------------------------------------------		
	------------------------------------------
	reg8_32_0: entity work.reg8_32_en(structural)
					port map(i0,i1,i2,i3,i4,i5,i6,i7,mid0_0,mid1_0,mid2_0,mid3_0,mid4_0,mid5_0,mid6_0,mid7_0,reset,clk,en);
	------------------------------------------
	stage0: entity work.stage0(structural)
					port map(mid0_0,mid1_0,mid2_0,mid3_0,mid4_0,mid5_0,mid6_0,mid7_0,mid0_1,mid1_1,mid2_1,mid3_1,mid4_1,mid5_1,mid6_1,mid7_1);
	------------------------------------------		
	------------------------------------------
	reg8_32_1: entity work.reg8_32(structural)
					port map(mid0_1,mid1_1,mid2_1,mid3_1,mid4_1,mid5_1,mid6_1,mid7_1,mid0_2,mid1_2,mid2_2,mid3_2,mid4_2,mid5_2,mid6_2,mid7_2,reset,clk);
	------------------------------------------
	stage1: entity work.stage1(structural)
					port map(mid0_2,mid1_2,mid2_2,mid3_2,mid4_2,mid5_2,mid6_2,mid7_2,mid0_3,mid1_3,mid2_3,mid3_3,mid4_3,mid5_3,mid6_3,mid7_3);
	------------------------------------------
	------------------------------------------
	reg8_32_2: entity work.reg8_32(structural)
					port map(mid0_3,mid1_3,mid2_3,mid3_3,mid4_3,mid5_3,mid6_3,mid7_3,mid0_4,mid1_4,mid2_4,mid3_4,mid4_4,mid5_4,mid6_4,mid7_4,reset,clk);
	------------------------------------------
	stage2: entity work.stage2(structural)
					port map(mid0_4,mid1_4,mid2_4,mid3_4,mid4_4,mid5_4,mid6_4,mid7_4,mid0_5,mid1_5,mid2_5,mid3_5,mid4_5,mid5_5,mid6_5,mid7_5);
	------------------------------------------
	------------------------------------------
	reg8_32_3: entity work.reg8_32(structural)
					port map(mid0_5,mid1_5,mid2_5,mid3_5,mid4_5,mid5_5,mid6_5,mid7_5,mid0_6,mid1_6,mid2_6,mid3_6,mid4_6,mid5_6,mid6_6,mid7_6,reset,clk);
	------------------------------------------
	stage3: entity work.stage3(structural)
					port map(mid0_6,mid1_6,mid2_6,mid3_6,mid4_6,mid5_6,mid6_6,mid7_6,mid0_7,mid1_7,mid2_7,mid3_7,mid4_7,mid5_7,mid6_7,mid7_7);
	------------------------------------------
	reg8_32_4: entity work.reg8_32(structural)
					port map(mid0_7,mid1_7,mid2_7,mid3_7,mid4_7,mid5_7,mid6_7,mid7_7,o0,o1,o2,o3,o4,o5,o6,o7,reset,clk);
	------------------------------------------		
	------------------------------------------
end structural;

