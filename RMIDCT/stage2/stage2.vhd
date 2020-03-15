----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:12:14 05/14/2014 
-- Design Name: 
-- Module Name:    stage2 - structural 
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

entity stage2 is
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
           o7 : out  STD_LOGIC_VECTOR (31 downto 0));
end stage2;

architecture structural of stage2 is
	constant k: std_logic_vector(31 downto 0):="00111110101101010000010011110011";--cos(pi/4)/2
	constant k0: std_logic_vector(31 downto 0):="00111110010000111110111100010101";--Cos(3pi/8)/2
	constant k1: std_logic_vector(31 downto 0):="00111110111011001000001101011110";--Sin(3pi/8)/2
begin
	rotate20: entity work.rotate2(structural)
				port map(i0,i1,k,o0,o1);
	rotate10: entity work.rotate1(structural)
				port map(i2,i3,k0,k1,o2,o3);			
	---------------------------------------
	butter0: entity work.butterfly(structural)
				port map(i4,i5,o4,o5);
	
	butter1: entity work.butterfly(structural)
				port map(i7,i6,o7,o6);
end structural;

