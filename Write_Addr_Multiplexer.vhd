----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:51:27 10/27/2014 
-- Design Name: 
-- Module Name:    Write_Addr_Multiplexer - Behavioral 
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

--This entire thing simply chooses which should be the Write Register depending on RegDst.

entity Write_Addr_Multiplexer is
    Port ( Instr20_16 : in  STD_LOGIC_VECTOR (4 downto 0);
           Instr15_11 : in  STD_LOGIC_VECTOR (4 downto 0);
           RegDst_in : in  STD_LOGIC;
           Write_Addr_out : out  STD_LOGIC_VECTOR (4 downto 0));
end Write_Addr_Multiplexer;

architecture Behavioral of Write_Addr_Multiplexer is

begin
process(RegDst_in, Instr20_16, Instr15_11)
begin
if RegDst_in = '1' then
	Write_Addr_out <= Instr15_11;
	else
	Write_Addr_out <= Instr20_16;
end if;
end process;
end Behavioral;

