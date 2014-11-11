----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:29:45 09/26/2014 
-- Design Name: 
-- Module Name:    shifter - Behavioral 
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

entity shifter is
    Port ( Control : in  STD_LOGIC_VECTOR (2 downto 0);
           OP1 : in  STD_LOGIC_VECTOR (31 downto 0);
           OP2 : in  STD_LOGIC_VECTOR (4 downto 0);
           Result1 : out  STD_LOGIC_VECTOR (31 downto 0);
           Result2 : out  STD_LOGIC_VECTOR (31 downto 0));
end shifter;

architecture Beh_shift of shifter is

begin

process(Control, OP1, OP2)
variable temp: STD_LOGIC_VECTOR(31 downto 0);
variable MSB: STD_LOGIC;

begin
temp := OP1;
case(Control) is 
	--SLL
	when "010" =>
		--shift 1 bit
		if OP2(0)='1' then
			temp := temp(30 downto 0)&'0';
		end if;
		--shift 2 bits
		if OP2(1)='1' then
			temp := temp(29 downto 0)&"00";
		end if;
		--shift 4 bits
		if OP2(2)='1' then
			temp := temp(27 downto 0)&x"0";
		end if;
		--shift 8 bits
		if OP2(3)='1' then
			temp := temp(23 downto 0) & x"00";
		end if;
		if OP2(4)='1' then
			temp := temp(15 downto 0) & x"0000";
		end if;
		
	--SRL
	when "110"|"100" =>
		--SRL: fill spaces with '0'
		if Control = "110" then
			MSB := '0';
		--SRA: fill spaces with MSB
		else
			MSB := OP1(31);
		end if;
		
		--shift 1 bit
		if OP2(0)='1' then
			temp(30 downto 0) := temp(31 downto 1);
			temp(31) := MSB;
		end if;
		--shift 2 bits
		if OP2(1)='1' then
			temp(29 downto 0) := temp(31 downto 2);
			temp(31 downto 30) := (others => MSB);
		end if;
		--shift 4 bits
		if OP2(2)='1' then
			temp(27 downto 0) := temp(31 downto 4);
			temp(31 downto 28) := (others => MSB);
		end if;
		--shift 8 bits
		if OP2(3)='1' then
			temp(23 downto 0) := temp(31 downto 8);
			temp(31 downto 24) := (others => MSB);
		end if;
		if OP2(4)='1' then
			temp(15 downto 0) := temp(31 downto 16);
			temp(31 downto 16) := (others => MSB);
		end if;

	when others => null;
	
	end case;
	
	Result1 <= temp;
   Result2 <= X"00000000";

end process;


end Beh_shift;

