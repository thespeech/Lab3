----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:21:34 10/27/2014 
-- Design Name: 
-- Module Name:    Shift_left2 - Behavioral 
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

entity Shift_left2 is
    Port ( input_32 : in  STD_LOGIC_VECTOR (31 downto 0);
           leftshift_32 : out  STD_LOGIC_VECTOR (31 downto 0));
end Shift_left2;

architecture Behavioral of Shift_left2 is

begin
leftshift_32 <= input_32(29 downto 0) & "00";

end Behavioral;

