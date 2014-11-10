----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:02:33 10/27/2014 
-- Design Name: 
-- Module Name:    Sign_extension - Behavioral 
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

entity Sign_extension is
    Port ( input_16 : in  STD_LOGIC_VECTOR (15 downto 0);
           extend_32 : out  STD_LOGIC_VECTOR (31 downto 0);
			  enable : in STD_LOGIC);
end Sign_extension;

architecture Behavioral of Sign_extension is

begin

process(input_16, enable)
begin

	if enable = '1' then
		extend_32(31 downto 16) <= (others => input_16(15));
		extend_32(15 downto 0) <= input_16;
	else
		extend_32(31 downto 16) <= (others => '0');
		extend_32(15 downto 0) <= input_16;
	end if;
end process;
end Behavioral;

