----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:08:30 05/14/2014 
-- Design Name: 
-- Module Name:    rotate1 - structural 
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

entity rotate1 is
    Port ( i0 : in  STD_LOGIC_VECTOR (31 downto 0);
           i1 : in  STD_LOGIC_VECTOR (31 downto 0);
           k0 : in  STD_LOGIC_VECTOR (31 downto 0);
           k1 : in  STD_LOGIC_VECTOR (31 downto 0);
           o0 : out  STD_LOGIC_VECTOR (31 downto 0);
           o1 : out  STD_LOGIC_VECTOR (31 downto 0));
end rotate1;

architecture structural of rotate1 is
	signal mid0,mid1,mid2,mid3: std_logic_vector(31 downto 0);
begin
	mul0: entity work.FPMul(Behavioral)
			port map(i0,k0,mid0);
	mul1: entity work.FPMul(Behavioral)
			port map(i0,k1,mid1);
	mul2: entity work.FPMul(Behavioral)
			port map(i1,k0,mid2);
	mul3: entity work.FPMul(Behavioral)
			port map(i1,k1,mid3);
	------------------------------------------
	adder: entity work.AddSub(Behavioral)
			port map(mid0,mid3,o0,'1');
	sub: entity work.AddSub(Behavioral)
			port map(mid2,mid1,o1,'0');				

end structural;

