----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    01:50:15 05/14/2014 
-- Design Name: 
-- Module Name:    FPMul - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity FPMul is
    Port ( in1 : in  STD_LOGIC_VECTOR (31 downto 0);
           in2 : in  STD_LOGIC_VECTOR (31 downto 0);
           o1 : out  STD_LOGIC_VECTOR (31 downto 0));
end FPMul;

architecture Behavioral of FPMul is
	signal s1,s2,s_last:std_logic;
	signal in1eqz,in2eqz,eqtoz: std_logic;
	signal e1,e2,e_last:std_logic_vector(7 downto 0);
	signal e_sum,e_bl:std_logic_vector(8 downto 0);
	signal m1,m2,m_last:std_logic_vector(22 downto 0); 
	signal m1_24,m2_24:std_logic_vector(23 downto 0);  
	signal m_bl:std_logic_vector(47 downto 0);	
	
begin
	s1<=in1(31);
	s2<=in2(31);
	e1<=in1(30 downto 23);
	e2<=in2(30 downto 23);
	m1<=in1(22 downto 0);
	m2<=in2(22 downto 0);
	----------------------------------------------------------------------------
	in1eqz<= '1' when (in1(30 downto 0)="0000000000000000000000000000000") else
				'0';
	in2eqz<= '1' when (in2(30 downto 0)="0000000000000000000000000000000") else
				'0';
	eqtoz<= in1eqz or in2eqz;
	----------------------------------------------------------------------------
	s_last<= s1 xor s2;
	------------------------------------------------------------------
	e_sum<= std_logic_vector(unsigned('0'&e1)+unsigned('0'&e2));
	e_bl<= std_logic_vector(unsigned(e_sum)-127);
	e_last<= std_logic_vector(unsigned(e_bl(7 downto 0))+1) when m_bl(47)='1' else
				e_bl(7 downto 0);--unsigned("000"&shr_val));
	-------------------------------------------------------------------
	m1_24<='1' & m1; 
	m2_24<='1' & m2;
	m_bl<= std_logic_vector(unsigned(m1_24)*unsigned(m2_24));
	-----------------------------------------------------------------
	m_last<= m_bl(46 downto 24) when m_bl(47)='1' else
				m_bl(45 downto 23);	
	---------------------------------------------------------------
	o1<= "00000000000000000000000000000000" when eqtoz='1' else
			s_last & e_last & m_last;
	----------------------------------------------------------------		
end Behavioral;

