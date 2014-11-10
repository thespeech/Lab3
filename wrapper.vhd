----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:07:37 11/10/2014 
-- Design Name: 
-- Module Name:    wrapper - wrapper_arch 
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

entity wrapper is
    Port ( ALUControl_out	: in	STD_LOGIC_VECTOR(7 downto 0);
           Control			: out	STD_LOGIC_VECTOR(5 downto 0));
end wrapper;

architecture wrapper_arch of wrapper is

variable ALUOp	: STD_LOGIC_VECTOR(1 downto 0) := (others=>'0');
variable funct : STD_LOGIC_VECTOR(5 downto 0) := (others=>'0');

begin

process (ALUControl_out)

begin
	ALUOp	:= ALUControl_out(7 downto 6);
	funct := ALUControl_out(5 downto 0);
	
end process;

end wrapper_arch;

