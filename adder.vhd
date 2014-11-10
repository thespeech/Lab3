----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:35:49 09/26/2014 
-- Design Name: 
-- Module Name:    adder - Behavioral 
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

entity adder is
generic (width : integer := 32);
port (A 		: in std_logic_vector(width-1 downto 0); --Operand1
		B 		: in std_logic_vector(width-1 downto 0); --Operand2
		C_in 	: in std_logic; --If 1, this is a subtraction operation 
		S 		: out std_logic_vector(width-1 downto 0); --Sum
		C_out	: out std_logic); --Carry out
end adder;

architecture adder_arch of adder is

signal S_wider : std_logic_vector(width downto 0) := (others => '0');
signal Sub_vec : std_logic_vector(width-1 downto 0) := (others => '0');
begin
	Sub_vec <= (others => C_in); --So that it can be used with logical operations
	S_wider <= ('0'& A) + ('0' & (Sub_vec xor B)) + C_in;
	S <= S_wider(width-1 downto 0);
	C_out <= S_wider(width);
end adder_arch;


