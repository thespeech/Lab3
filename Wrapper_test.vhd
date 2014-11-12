--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   04:47:58 11/12/2014
-- Design Name:   
-- Module Name:   C:/Users/Bob/Desktop/Lab3/Wrapper_test.vhd
-- Project Name:  Lab3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: wrapper
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
 
ENTITY Wrapper_test IS
END Wrapper_test;
 
ARCHITECTURE behavior OF Wrapper_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT wrapper
    PORT(
         ALUControl_in : IN  std_logic_vector(8 downto 0);
         Wrap_Control : OUT  std_logic_vector(5 downto 0);
         ALU_Jump : OUT  std_logic;
         Immediate : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal ALUControl_in : std_logic_vector(8 downto 0) := (others => '0');
   signal Immediate : std_logic := '0';

 	--Outputs
   signal Wrap_Control : std_logic_vector(5 downto 0);
   signal ALU_Jump : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: wrapper PORT MAP (
          ALUControl_in => ALUControl_in,
          Wrap_Control => Wrap_Control,
          ALU_Jump => ALU_Jump,
          Immediate => Immediate
        );

   -- Clock process definitions
   --<clock>_process :process
   begin
		--<clock> <= '0';
		--wait for <clock>_period/2;
		--<clock> <= '1';
		--wait for <clock>_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 1000 ns;	

      --wait for <clock>_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
