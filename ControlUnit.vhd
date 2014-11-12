----------------------------------------------------------------------------------
-- Company: NUS
-- Engineer: Rajesh Panicker
-- 
-- Create Date:   21:06:18 14/10/2014
-- Design Name: 	ControlUnit
-- Target Devices: Nexys 4 (Artix 7 100T)
-- Tool versions: ISE 14.7
-- Description: Control Unit for the basic MIPS processor
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: The interface (entity) as well as implementation (architecture) can be modified
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity ControlUnit is
    Port ( 	opcode 		: in  STD_LOGIC_VECTOR (5 downto 0);
				ImmControl	: out STD_LOGIC; --Used for specifying whether an instruction uses ImmControls
				LinkOut		: out STD_LOGIC;
				ALUOp 		: out  STD_LOGIC_VECTOR (2 downto 0);
				Branch 		: out  STD_LOGIC;		
				Jump	 		: out  STD_LOGIC;	
				MemRead 		: out  STD_LOGIC;	
				MemtoReg 	: out  STD_LOGIC;	
				InstrtoReg	: out STD_LOGIC;
				MemWrite		: out  STD_LOGIC;	
				ALUSrc 		: out  STD_LOGIC;	
				SignExtend 	: out  STD_LOGIC;
				RegWrite		: out  STD_LOGIC;	
				RegDst		: out  STD_LOGIC);
end ControlUnit;


architecture arch_ControlUnit of ControlUnit is  
begin   
	--<implement control unit here>
process(opcode)
begin
	case opcode(5 downto 0) is
	when "000000" => -- R format, this applies to ADD,ADDU,AND,JR,MFHI,MFLO,MULT,MULTU,NOOP,OR,SLL,SLLV,SLT,SLTU,SRA,SRL,SRLV,SUB,SUBU,XOR 
		RegDst <= '1';
		ALUSrc <= '0';
		MemtoReg <= '0';
		RegWrite <= '1';
		MemRead <= '0';
		MemWrite <= '0';
		Branch <= '0';
		ALUOp <= "010";	
		Jump <= '0';
		InstrtoReg <= '0';
		SignExtend <= '0';
		ImmControl <= '0';
		LinkOut	<= '0';
		
	when "001000" => --ADDI - 0010 00ss ssst tttt iiii iiii iiii iiii
		RegDst <= '0'; --Storage destination is t, 20-16.
		ALUSrc <= '1'; --Immediate is used for main ALU.
		MemtoReg <= '0'; --Nothing from memory needs to be stored in register.
		RegWrite <= '1'; --Register needs to be written to.
		MemRead <= '0'; --Nothing to read from memory.
		MemWrite <= '0'; --Nothing to write to memory.
		Branch <= '0'; --Nothing to branch.
		ALUOp <= "010"; --Addition operation.
		Jump <= '0'; --No jump.
		InstrtoReg <= '0'; --No direct storage of instructions
		SignExtend <= '1'; --Extended to add into ALU.
		ImmControl <= '1'; --ImmControl function
		LinkOut	<= '0';
			
	when "001001" => --ADDIU - 0010 01ss ssst tttt iiii iiii iiii iiii
		RegDst <= '0'; --Storage destination is t, 20-16.
		ALUSrc <= '1'; --Immediate is used for main ALU.
		MemtoReg <= '0'; --Nothing from memory needs to be stored in register.
		RegWrite <= '1'; --Register needs to be written to.
		MemRead <= '0'; --Nothing to read from memory.
		MemWrite <= '0'; --Nothing to write to memory.
		Branch <= '0'; --Nothing to branch.
		ALUOp <= "010"; --Addition operation.
		Jump <= '0'; --No jump.
		InstrtoReg <= '0'; --No direct storage of instructions
		SignExtend <= '1'; --Extended to add into ALU. ADDIU actually is the same as ADDI, but reiterated for consistency.
		ImmControl <= '1'; --ImmControl function
		LinkOut	<= '0';
		
	when "100011" => -- lw
		RegDst <= '0';
		ALUSrc <= '1';
		MemtoReg <= '1';
		RegWrite <= '1';
		MemRead <= '1';
		MemWrite <= '0';
		Branch <= '0';
		ALUOp <= "000";
		Jump <= '0';
		InstrtoReg <= '0';
		SignExtend <= '1';
		ImmControl <= '0';
		LinkOut	<= '0';

	when "101011" => -- sw
		RegDst <= '0'; --don't care
		ALUSrc <= '1';
		MemtoReg <= '0'; --don't care
		RegWrite <= '0';
		MemRead <= '0';
		MemWrite <= '1';
		Branch <= '0';
		ALUOp <= "000";
		Jump <= '0';
		InstrtoReg <= '0';
		SignExtend <= '1';
		ImmControl <= '1';
		LinkOut	<= '0';

	when "000100" => -- beq
		RegDst <= '0'; --don't care
		ALUSrc <= '0';
		MemtoReg <= '0'; --don't care
		RegWrite <= '0';
		MemRead <= '0';
		MemWrite <= '0';
		Branch <= '1';
		ALUOp <= "001";
		Jump <= '0';
		InstrtoReg <= '0';
		SignExtend <= '1';
		ImmControl <= '1';
		LinkOut	<= '0';

	when "000010" => -- jump
		RegDst <= '0'; --don't care
		ALUSrc <= '0';
		MemtoReg <= '0'; --don't care
		RegWrite <= '0';
		MemRead <= '0';
		MemWrite <= '0';
		Branch <= '0';
		ALUOp <= "001";
		Jump <= '1';
		InstrtoReg <= '0';
		SignExtend <= '0';
		ImmControl <= '1';
		LinkOut	<= '0';
		
	
	when "001111" => -- lui
		RegDst <= '0';
		ALUSrc <= '0';
		MemtoReg <= '0'; --Immediate so does not come from memory
		RegWrite <= '1';
		MemRead <= '0';
		MemWrite <= '0'; -- data memory: write data input
		Branch <= '0';
		ALUOp <= "000";
		Jump <= '0';
		InstrtoReg <= '1';
		SignExtend <= '0';
		ImmControl <= '1';
		LinkOut	<= '0';
		
	when "001101" => -- ori
		RegDst <= '0';
		ALUSrc <= '1'; --changed to all not asserted except ALUSrc and RegWrite
		MemtoReg <= '0';
		RegWrite <= '1';
		MemRead <= '0';
		MemWrite <= '0';
		Branch <= '0';
		ALUOp <= "011";
		Jump <= '0';
		InstrtoReg <= '0';
		SignExtend <= '0';
		ImmControl <= '1';
		LinkOut	<= '0';
		
		
	when "001010" => --SLTI - 0010 10ss ssst tttt iiii iiii iiii iiii
		RegDst <= '0'; -- $t is the destination, so RegDst = Instr[20-16]
		ALUSrc <= '1'; -- Immediate is the second input to the ALU, so ALUSrc = 1
		MemtoReg <= '0'; --We want ALUResult from this line.
		RegWrite <= '1'; --We want either 0 or 1 - SOMETHING - to be written, so turn this on.
		MemRead <= '0'; --No need for any read.
		MemWrite <= '0'; --No need for any write.
		Branch <= '0'; --No need for any branch.
		ALUOp <= "010"; --Subtraction operation.
		Jump <= '0'; --No jump operation.
		InstrtoReg <= '0'; --The ImmControl is NOT stored to registry.
		SignExtend <= '1'; --ImmControl being used in ALU calculations.
		ImmControl <= '1'; --ImmControl instruction
		LinkOut	<= '0';

	when "000001" => --BGEZ, BGEZAL, difference is Instr[20-16]. Need to check somehow.
		RegDst <= '0'; --Don't care, register is never written to.
		ALUSrc <= '0'; --Use Immediate for ALU.
		MemToReg <= '0'; --No storage of memory to registry
		LinkOut	<= '1'; --Do a +8 to PC.
		RegWrite <= '0'; --No need to write stuff to register.
		MemRead <= '0'; --No need to read memory.
		MemWrite <= '0'; -- No need to write to memory.
		Branch <= '1'; --Probably need to branch, depending on ALU result. (Check the ALU's 0 output. May need reversal. When? Must fit command.)
		ALUOp <= "010"; --Subtraction operation of 0 from $s.
		Jump <= '0'; -- Use the branch result, not jump-shift address result.
		InstrtoReg <= '0'; --The Immediate is not stored to registry.
		SignExtend <= '0'; -- Immediate is not used for ALU.
		ImmControl <= '1';	-- ImmControl instruction
		
	when "000011" => --JAL - stores current PC + 8 - whatever, the instruction's address after this - into $31 - then jumps to the ImmControl instruction shifted 2. 
		RegDst <= '0'; --Don't care, register is never written to.
		ALUSrc <= '0'; --Main ALU not used. Don't care. 
		MemToReg <= '0'; --No storage of memory to registry.
		RegWrite <= '1'; --Need to write to register.
		MemRead <= '0'; --No need to read memory.
		Branch <= '0'; --No need to branch - or rather, it wouldn't matter anyway, since you need to jump. Don't care.
		ALUOp <= "000"; --Don't care. Main ALU not used.
		Jump <= '1'; --Instr[25-0] used to jump to.
		InstrtoReg <= '0'; --Immediate not stored to registry
		SignExtend <= '0'; --Immediate not used for ALU
		ImmControl <= '1'; -- ImmControl instruction
		LinkOut	<= '1';
		
	when others =>
		RegDst <= '0';
		ALUSrc <= '0';
		MemtoReg <= '0';
		RegWrite <= '0';
		MemRead <= '0';
		MemWrite <= '0';
		Branch <= '0';
		ALUOp <= "000";
		Jump <= '0';
		InstrtoReg <= '0';
		SignExtend <= '0';
		ImmControl <= '0';
		LinkOut	<= '0';

	end case;
end process;

end arch_ControlUnit;

