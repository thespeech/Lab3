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
generic (width 	: integer := 32);
    Port ( 	CLK							: in	STD_LOGIC;
				Operand1_wrapper			: in 	STD_LOGIC_VECTOR(width-1 downto 0);
				Operand2_wrapper			: in	STD_LOGIC_VECTOR(width-1 downto 0);
				ALUControl_in_wrapper	: in	STD_LOGIC_VECTOR(8 downto 0);
				Result_wrapper				: out	STD_LOGIC_VECTOR(width-1 downto 0);
				ALU_Zero_wrapper			: out	STD_LOGIC;
				ALU_Jump_wrapper			: out STD_LOGIC;
				Immediate_wrapper			: in 	STD_LOGIC);
end wrapper;


architecture wrapper_arch of wrapper is

component ALU is
	generic (width 	: integer := 32);
	Port	(
			CLK			: in	STD_LOGIC;
			Control		: in	STD_LOGIC_VECTOR (5 downto 0);
			Operand1		: in	STD_LOGIC_VECTOR (width-1 downto 0);
			Operand2		: in	STD_LOGIC_VECTOR (width-1 downto 0);
			Result1		: out	STD_LOGIC_VECTOR (width-1 downto 0);
			Result2		: out	STD_LOGIC_VECTOR (width-1 downto 0);
			ALU_zero		: out STD_LOGIC;
			Status		: out	STD_LOGIC_VECTOR (2 downto 0)); -- busy (multicycle only), overflow (add and sub), zero (sub)
			--Debug			: out	STD_LOGIC_VECTOR (width-1 downto 0));	
end component;

----------------------------------------------------------------
-- ALU Signals
----------------------------------------------------------------
--	constant	width 		: 	integer := 32;
	signal	Control		:	STD_LOGIC_VECTOR (5 downto 0);
	signal	Operand1		:	STD_LOGIC_VECTOR (width-1 downto 0);
	signal	Operand2		:	STD_LOGIC_VECTOR (width-1 downto 0);
	signal	Result1		:	STD_LOGIC_VECTOR (width-1 downto 0);
	signal	Result2		:	STD_LOGIC_VECTOR (width-1 downto 0);
	signal	ALU_zero		:	STD_LOGIC;
	signal	Status		:	STD_LOGIC_VECTOR (2 downto 0); -- busy (multicycle only), overflow (add and sub), zero (sub)
	--signal	Debug			:	STD_LOGIC_VECTOR (width-1 downto 0);


--Internal Signals

	
begin

----------------------------------------------------------------
-- ALU port map
----------------------------------------------------------------
ALU1 				: ALU port map
						(
						CLK		=> CLK,
						Control	=> Control,
						Operand1	=> Operand1,
						Operand2	=> Operand2,
						Result1	=> Result1,
						Result2	=> Result2,
						ALU_zero	=> ALU_zero,
						Status	=> Status -- busy (multicycle only), overflow (add and sub), zero (sub)
						--Debug		=> Debug
						);						
						

process (ALUControl_in_wrapper, Immediate_wrapper)
variable ALUOp	: STD_LOGIC_VECTOR(2 downto 0) := (others=>'0');
variable funct : STD_LOGIC_VECTOR(5 downto 0) := (others=>'0');
variable immed	: STD_LOGIC := '0';

begin
	ALUOp	:= ALUControl_in_wrapper(8 downto 6);
	funct := ALUControl_in_wrapper(5 downto 0);
	immed := Immediate_wrapper; 
	Operand1 <= Operand1_wrapper;
	Operand2 <= Operand2_wrapper;
	ALU_zero_wrapper <= ALU_zero;
	Result_wrapper <= Result1;
	
if immed = '0' then
	case ALUOp is
	when "000" => -- lw, sw
		--ALU_Out <= AplusB;
		-- addition
		Control <= "000010";
		ALU_Jump_wrapper <= '0';
	when "001" => -- beq
		-- assert ALU_zero
		Control <= "001111"; -- control signal for beq
		ALU_Jump_wrapper <= '0';
	
	when "010" =>		-- R-type
		case funct is
		
		when "001000"=> --Jump reg
			--Control <= "000000";
			ALU_Jump_wrapper <= '1';
			
		when "100000"=> --add
			Control <= "000010";
			ALU_Jump_wrapper <= '0';

		when "100010"=> --sub
			Control <= "000110";
			ALU_Jump_wrapper <= '0';

		when "011000"=> --mult
			Control <= "010000";
			ALU_Jump_wrapper <= '0';
		when "011001"=> --multu
			Control <= "010001";
			ALU_Jump_wrapper <= '0';
		when "100100"=> --and
			Control <= "000000";
			ALU_Jump_wrapper <= '0';
		when "100101"=> --or
			Control <= "000001";
			ALU_Jump_wrapper <= '0';
		when "100111"=> --nor
			Control <= "001100";
			ALU_Jump_wrapper <= '0';
		when "101010"=> --slt
			--ALU_Out(0) <= AminusB(31) xor suboverflow;
			Control <= "000111";
			ALU_Jump_wrapper <= '0';
		when "101011"=> --sltu
			Control <= "001110";
			ALU_Jump_wrapper <= '0';
		when "000000" => -- sll
			Control <= "000101";
			ALU_Jump_wrapper <= '0';
		when "000010" => -- srl
			Control <= "001101";
			ALU_Jump_wrapper <= '0';
		when "000011" => -- sra
			Control <= "001001";
			ALU_Jump_wrapper <= '0';
		when "000100" => -- sllv
			Control <= "000101";
			ALU_Jump_wrapper <= '0';
		when "010000" => --mfhi
			Control <= "011001";
			ALU_Jump_wrapper <= '0';
		when "010010" => --mflo
			Control <= "011000";
			ALU_Jump_wrapper <= '0';
		when others =>	null;
		end case;

	when "011" => -- ori
		--ALU_Out <= AorB;
		Control <= "000001";
		ALU_Jump_wrapper <= '0';
	when others => null;

	end case;
elsif immed = '1' then
	case ALUOp is
	when "010" => --ADDI, (probably) ADDIU
		Control <= "000010";
		ALU_Jump_wrapper <= '0';
	when "001" => --BGEZ, BGEZAL
		Control <= "011010";
		ALU_Jump_wrapper <= '0';
	when others => null;
	end case;
end if;
	
	
	
end process;

end wrapper_arch;

