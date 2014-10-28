----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:20:21 10/28/2014 
-- Design Name: 
-- Module Name:    PC_Multiplexer - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity PC_Multiplexer is
    Port ( PC_Multi_in : in  STD_LOGIC_VECTOR (31 downto 0);
           Shifter2_in : in  STD_LOGIC_VECTOR (31 downto 0);
			  Branch_in : in STD_LOGIC;
			  ALU_zero_in : in STD_LOGIC;
           PC_Multi_out : out  STD_LOGIC_VECTOR (31 downto 0));
end PC_Multiplexer;

architecture Behavioral of PC_Multiplexer is

begin

process(Branch_in, ALU_zero_in)

begin

if (Branch_in = '1' and ALU_zero_in = '1') then
	PC_Multi_out <= PC_Multi_in + Shifter2_in;
	else
	PC_Multi_out <= PC_Multi_in;
end if;

end process;

end Behavioral;

