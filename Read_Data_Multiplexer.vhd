----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    01:59:51 10/28/2014 
-- Design Name: 
-- Module Name:    Read_Data_Multiplexer - Behavioral 
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

entity Read_Data_Multiplexer is
    Port ( Read_Data_in : in  STD_LOGIC_VECTOR (31 downto 0);
           ALU_Data_in : in  STD_LOGIC_VECTOR (31 downto 0);
			  InstrToReg_in : in STD_LOGIC;
			  InstrForLUI_in : in STD_LOGIC_VECTOR (15 downto 0);
           MemToReg_Data_in : in  STD_LOGIC;
           Write_Data_out : out  STD_LOGIC_VECTOR (31 downto 0));
end Read_Data_Multiplexer;

architecture Behavioral of Read_Data_Multiplexer is

begin

process(MemToReg_Data_in, ALU_Data_in, Read_Data_in, InstrToReg_in, InstrForLui_in)
begin
if InstrToReg_in = '1' then
	Write_Data_out <= InstrForLUI_in & x"0000";
elsif MemToReg_Data_in = '1' then
	Write_Data_out <= Read_Data_in;
else
	Write_Data_out <= ALU_Data_in;
end if;
end process;
end Behavioral;

