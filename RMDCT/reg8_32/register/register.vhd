----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:33:03 05/14/2014 
-- Design Name: 
-- Module Name:    register - Behavioral 
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

entity reg32 is
    Port ( i0 : in  STD_LOGIC_VECTOR (31 downto 0);
           clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           o0 : out  STD_LOGIC_VECTOR (31 downto 0));
end reg32;

architecture Behavioral of reg32 is
	signal r_reg,r_next:std_logic_vector(31 downto 0);
begin
	process(clk,reset)
		begin
			if(reset='1') then
				r_reg<=(others=>'0');
			elsif (clk'event and clk='1') then
				r_reg<=r_next;
			end if;
	end process;
	---------------------------------------
	r_next<=i0;
	o0<=r_reg;
	
end Behavioral;

