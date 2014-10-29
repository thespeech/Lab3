----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:25:49 10/27/2014 
-- Design Name: 
-- Module Name:    ALU_Control_Unit - Behavioral 
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

entity ALU_Control_Unit is
    Port ( Instruction_Low : in  STD_LOGIC_VECTOR (5 downto 0);
           ALUOp_in : in  STD_LOGIC_VECTOR (1 downto 0);
           ALUControl_out : out  STD_LOGIC_VECTOR (7 downto 0));
end ALU_Control_Unit;

architecture Behavioral of ALU_Control_Unit is

begin

ALUControl_out <= ALUOp_in & Instruction_Low; --ALU1 already handling full 8 bits, so just concatenate here.

end Behavioral;

