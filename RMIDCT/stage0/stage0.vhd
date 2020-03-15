----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:36:52 05/14/2014 
-- Design Name: 
-- Module Name:    stage0 - structural 
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

entity stage0 is
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
end stage0;

architecture structural of stage0 is

begin
	butter0: entity work.butterfly(structural)
				port map(i0,i7,o0,o7);
	
	butter1: entity work.butterfly(structural)
				port map(i1,i6,o1,o6);
					
	butter2: entity work.butterfly(structural)
				port map(i2,i5,o2,o5);
	
	butter3: entity work.butterfly(structural)
				port map(i3,i4,o3,o4);
				
end structural;

