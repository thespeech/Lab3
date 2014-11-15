--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   00:07:53 10/29/2014
-- Design Name:   
-- Module Name:   C:/Lab3/test_mips.vhd
-- Project Name:  Lab3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: MIPS
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
 
ENTITY test_mips IS
END test_mips;
 
ARCHITECTURE behavior OF test_mips IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MIPS
    PORT(
         Addr_Instr : OUT  std_logic_vector(31 downto 0);
         Instr : IN  std_logic_vector(31 downto 0);
         Addr_Data : OUT  std_logic_vector(31 downto 0);
         Data_In : IN  std_logic_vector(31 downto 0);
         Data_Out : OUT  std_logic_vector(31 downto 0);
         MemRead : OUT  std_logic;
         MemWrite : OUT  std_logic;
         RESET : IN  std_logic;
         CLK : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Instr : std_logic_vector(31 downto 0) := (others => '0');
   signal Data_In : std_logic_vector(31 downto 0) := (others => '0');
   signal RESET : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal Addr_Instr : std_logic_vector(31 downto 0);
   signal Addr_Data : std_logic_vector(31 downto 0);
   signal Data_Out : std_logic_vector(31 downto 0);
   signal MemRead : std_logic;
   signal MemWrite : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 50 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MIPS PORT MAP (
          Addr_Instr => Addr_Instr,
          Instr => Instr,
          Addr_Data => Addr_Data,
          Data_In => Data_In,
          Data_Out => Data_Out,
          MemRead => MemRead,
          MemWrite => MemWrite,
          RESET => RESET,
          CLK => CLK
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_period*10;

      -- insert stimulus here 
		-- lw $s0, 4; $0 is register 16 in unsigned dec. Increment for the rest.
		Instr <= "10001100000100000000000000000100"; -- op = x23, rs = 0, rt = 16, imm = 4
		Data_in <= x"00000004";
		wait for CLK_period*10;
		
		-- lw $s1, 3
		Instr <= "10001100000100010000000000000011"; -- op = x23, rs = 0, rt = 17, imm = 3
		Data_in <= x"00000003";
		wait for CLK_period*10;
		
		-- add $s2, $s0, $s1 
		Instr <= "00000010000100011001000000100000"; -- op = 0, rs = 16, rt = 17, rd = 18, shamt = 0, funct = x20
		Data_in <= (others => '0');	
		wait for CLK_period*10;
		
		-- lw $s3, 12
		Instr <= "10001100000100110000000000001100"; -- op = x23, rs = 0, rt = 19, imm = 12
		Data_in <= x"0000000C";
		wait for CLK_period*10;
		
		-- lw $s4, 5
		Instr <= "10001100000101000000000000000101"; -- op = x23, rs = 0, rt = 20, imm = 5
		Data_in <= x"00000005";
		wait for CLK_period*10;
		
	
		-- sub $s5, $s3, $s4
		Instr <= "00000010011101001010100000100010"; -- op = 0, rs = 19, rt = 20, rd = 21, shamt = 0, funct = x20
		Data_in <= (others => '0');	
		wait for CLK_period*10;
		
		-- lw $s4, 5 --Result should be 5 into $s4
		Instr <= "10001100000101000000000000000101"; -- op = x23, rs = 0, rt = 20, imm = 5
		Data_in <= x"00000005";
		wait for CLK_period*10;
		
		-- addi $s2, $s4, 0x07 --Result should be 12 into $s2
		Instr <= "00100010100100100000000000000111"; -- op = x08, rt = 18, rs = 20, imm = 7
		Data_in <= (others => '0');
		wait for CLK_period*10;
		
		--and $5, $s4, $s4 --Result should be 5 into $5
		Instr <= "00000010100101001010100000100100"; -- op = x08, rt = 18, rs = 20, imm = 7
		Data_in <= (others => '0');
		wait for CLK_period*10;
		
		--and $5, $5, $s3
		Instr <= "00000010100101001010100000100100";
		Data_in <= (others => '0');
		wait for CLK_period*10;
		
		--lw $17, 10
		Instr <= "10001100000100010000000000001010";
		Data_in <= x"0000000A";
		wait for CLK_period*10;

		--lw $18, 5
		Instr <= "10001100000100100000000000000101";
		Data_in <= x"00000005";
		wait for CLK_period*10;
		
		--or $19, $17, $18
		Instr <= "00000010001100101001100000100101";
		Data_in <= (others => '0');
		wait for CLK_period*10;
		
		--nor $20, $17, $18
		Instr <= "00000010001100101010000000100111";
		Data_in <= (others => '0');
		wait for CLK_period*10;
		
		-- ori $19, $17, 1
		Instr <= "00110110001100110000000000000001";
		Data_in <= (x"00000001");
		wait for CLK_period*10;
		
		-- xor $20, $17, $18
		Instr <= "00000010001100101010000000100110";
		Data_in <= (others => '0');
		wait for CLK_period*10;
		
		--sll $19, $19, 2
		Instr <= "00000000000100111001100010000000";
		Data_in <= (x"00000002");
		wait for CLK_period*10;
		
		--sra $19, $19, 2
		Instr <= "00000000000100111001100010000011";
		Data_in <= (x"00000002");
		wait for CLK_period*10;
		
		--srl $19, $19, 3
		Instr <= "00000000000100111001100011000010";
		Data_in <= (x"00000003");
		wait for CLK_period*10;
		
		--lw $17, 14
		Instr <= "10001100000100010000000000001110";
		Data_in <= x"0000000A";
		wait for CLK_period*10;

		--lw $18, 5
		Instr <= "10001100000100100000000000000101";
		Data_in <= x"00000005";
		wait for CLK_period*10;
		
		--mult $17, $18
		Instr <= "00000010001100100000000000011000";
		Data_in <= (others => '0');
		wait for CLK_period*10;
   end process;

END;
