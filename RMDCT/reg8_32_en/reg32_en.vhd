----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:53:09 05/17/2014 
-- Design Name: 
-- Module Name:    reg32_en - Behavioral 
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

entity reg32_en is
	 Port ( i0 : in  STD_LOGIC_VECTOR (31 downto 0);
           clk : in  STD_LOGIC;
           reset,en : in  STD_LOGIC;
           o0 : out  STD_LOGIC_VECTOR (31 downto 0));
end reg32_en;

architecture Behavioral of reg32_en is
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
	r_next<=i0 when en='1' else 
				r_reg;
	o0<=r_reg;

end Behavioral;

