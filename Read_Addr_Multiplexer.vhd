----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:57:31 10/27/2014 
-- Design Name: 
-- Module Name:    ALU_secondinput_multiplexer - Behavioral 
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

entity Read_Addr_Multiplexer is
    Port ( ALUSrc_in : in  STD_LOGIC;
           ReadData2_in : in  STD_LOGIC_VECTOR (31 downto 0);
           SignExtend_in : in  STD_LOGIC_VECTOR (31 downto 0);
           ALUReadData2_out : out  STD_LOGIC_VECTOR (31 downto 0));
end Read_Addr_Multiplexer;

architecture Behavioral of Read_Addr_Multiplexer is

begin

with ALUSrc_in select
	ALUReadData2_out <= 	ReadData2_in when '0',
						SignExtend_in when '1',
						(others => '0') when others;

end Behavioral;

