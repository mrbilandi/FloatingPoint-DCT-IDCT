----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:50:51 05/17/2014 
-- Design Name: 
-- Module Name:    reg8_32_en - Behavioral 
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

entity reg8_32_en is
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
end reg8_32_en;

architecture structural of reg8_32_en is

begin
	reg0: entity work.reg32_en(Behavioral)
			port map (i0,clk,reset,en,o0);
	reg1: entity work.reg32_en(Behavioral)
			port map (i1,clk,reset,en,o1);
	reg2: entity work.reg32_en(Behavioral)
			port map (i2,clk,reset,en,o2);
	reg3: entity work.reg32_en(Behavioral)
			port map (i3,clk,reset,en,o3);
	reg4: entity work.reg32_en(Behavioral)
			port map (i4,clk,reset,en,o4);
	reg5: entity work.reg32_en(Behavioral)
			port map (i5,clk,reset,en,o5);
	reg6: entity work.reg32_en(Behavioral)
			port map (i6,clk,reset,en,o6);
	reg7: entity work.reg32_en(Behavioral)
			port map (i7,clk,reset,en,o7);		

end structural;

