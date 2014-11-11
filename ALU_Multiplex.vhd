----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:50:25 11/11/2014 
-- Design Name: 
-- Module Name:    ALU_Multiplex - Behavioral 
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

entity ALU_Multiplex is
    Port ( ButtonPress	: in 	STD_LOGIC;
			  ResultLower 	: in  STD_LOGIC_VECTOR(31 downto 0);
           ResultUpper 	: in  STD_LOGIC_VECTOR(31 downto 0);
			  ResultSent	: out	STD_LOGIC_VECTOR(31 downto 0));
end ALU_Multiplex;

architecture Behavioral of ALU_Multiplex is

begin

process(ResultLower, ResultUpper)

begin
	if ButtonPress = '1' then
		ResultSent <= ResultUpper;
	else
		ResultSent <= ResultLower;
	end if;
end process;
end Behavioral;

