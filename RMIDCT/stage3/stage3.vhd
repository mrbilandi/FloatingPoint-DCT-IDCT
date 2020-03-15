----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:28:22 05/14/2014 
-- Design Name: 
-- Module Name:    stage3 - structural 
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

entity stage3 is
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
end stage3;

architecture structural of stage3 is
	constant k0_0: std_logic_vector(31 downto 0):="00111101110001111100010111000010";--Cos(7pi/16)/2
	constant k1_0: std_logic_vector(31 downto 0):="00111110111110110001010010111110";--Sin(7pi/16)/2
	constant k0_1: std_logic_vector(31 downto 0):="00111110110101001101101100110001";--Cos(3pi/16)/2
	constant k1_1: std_logic_vector(31 downto 0):="00111110100011100011100111011010";--Sin(3pi/16)/2
begin
	o0<=i0;
	o1<=i4;
	o2<=i2;
	o3<=i6;
	--------------------------
	rotate10: entity work.rotate1(structural)
				port map(i1,i7,k0_0,k1_0,o4,o7);
	rotate11: entity work.rotate1(structural)
				port map(i5,i3,k0_1,k1_1,o5,o6);			

end structural;

