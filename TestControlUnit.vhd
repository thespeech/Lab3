--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   05:57:08 10/29/2014
-- Design Name:   
-- Module Name:   C:/Lab3/TestControlUnit.vhd
-- Project Name:  Lab3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ControlUnit
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TestControlUnit IS
END TestControlUnit;
 
ARCHITECTURE behavior OF TestControlUnit IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ControlUnit
    PORT(
         opcode : IN  std_logic_vector(5 downto 0);
         ALUOp : OUT  std_logic_vector(1 downto 0);
         Branch : OUT  std_logic;
         Jump : OUT  std_logic;
         MemRead : OUT  std_logic;
         MemtoReg : OUT  std_logic;
         InstrtoReg : OUT  std_logic;
         MemWrite : OUT  std_logic;
         ALUSrc : OUT  std_logic;
         SignExtend : OUT  std_logic;
         RegWrite : OUT  std_logic;
         RegDst : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal opcode : std_logic_vector(5 downto 0) := (others => '0');

 	--Outputs
   signal ALUOp : std_logic_vector(1 downto 0);
   signal Branch : std_logic;
   signal Jump : std_logic;
   signal MemRead : std_logic;
   signal MemtoReg : std_logic;
   signal InstrtoReg : std_logic;
   signal MemWrite : std_logic;
   signal ALUSrc : std_logic;
   signal SignExtend : std_logic;
   signal RegWrite : std_logic;
   signal RegDst : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ControlUnit PORT MAP (
          opcode => opcode,
          ALUOp => ALUOp,
          Branch => Branch,
          Jump => Jump,
          MemRead => MemRead,
          MemtoReg => MemtoReg,
          InstrtoReg => InstrtoReg,
          MemWrite => MemWrite,
          ALUSrc => ALUSrc,
          SignExtend => SignExtend,
          RegWrite => RegWrite,
          RegDst => RegDst
        );

   -- Clock process definitions
--   <clock>_process :process
--   begin
--		<clock> <= '0';
--		wait for <clock>_period/2;
--		<clock> <= '1';
--		wait for <clock>_period/2;
--   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;
		opcode <= "100011"; --lw
		
		wait for 100 ns;
		opcode <= "101011"; --sw

		wait for 100 ns;
		opcode <= "000100"; --beq
		
		wait for 100 ns;
		opcode <= "100011"; --j
		
		wait for 100 ns;
		opcode <= "001111"; --lui
		
		wait for 100 ns;
		opcode <= "000000"; --r type
		
		wait for 100 ns;
		opcode <= "001101"; --ori
		
      wait;
   end process;

END;