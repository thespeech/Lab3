--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   04:51:15 10/29/2014
-- Design Name:   
-- Module Name:   C:/Lab3/Top_test.vhd
-- Project Name:  Lab3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: TOP
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
 
ENTITY Top_test IS
END Top_test;
 
ARCHITECTURE behavior OF Top_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT TOP
    PORT(
         DIP : IN  std_logic_vector(15 downto 0);
         LED : OUT  std_logic_vector(15 downto 0);
         RESET : IN  std_logic;
         CLK_undiv : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal DIP : std_logic_vector(15 downto 0) := (others => '0');
   signal RESET : std_logic := '0';
   signal CLK_undiv : std_logic := '0';

 	--Outputs
   signal LED : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant CLK_undiv_period : time := 100 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: TOP PORT MAP (
          DIP => DIP,
          LED => LED,
          RESET => RESET,
          CLK_undiv => CLK_undiv
        );

   -- Clock process definitions
   CLK_undiv_process :process
   begin
		CLK_undiv <= '0';
		wait for CLK_undiv_period/2;
		CLK_undiv <= '1';
		wait for CLK_undiv_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin
		DIP <= "0000000000000000";
      -- hold reset state for 100 ns.
		--One 'tick' takes 2*CLK_undiv_period.
		--One instruction in the 17-count loop takes 4*CLK_undiv_period, e.g, 34 'ticks'
      wait for CLK_undiv_period * 85; --Time before undefined stops being undefined
		wait for CLK_undiv_period * 136;
		DIP <= "0000000010101010";
		RESET <= '1';
		wait for CLK_undiv_period*4;
		RESET <= '0';
      -- insert stimulus here 

      wait;
   end process;

END;
