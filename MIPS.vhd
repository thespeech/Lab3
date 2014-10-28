----------------------------------------------------------------------------------
-- Company: NUS
-- Engineer: Rajesh Panicker
-- 
-- Create Date:   21:06:18 14/10/2014
-- Design Name: 	MIPS
-- Target Devices: Nexys 4 (Artix 7 100T)
-- Tool versions: ISE 14.7
-- Description: MIPS processor
--
-- Dependencies: PC, ALU, ControlUnit, RegFile
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: DO NOT modify the interface (entity). Implementation (architecture) can be modified.
--
----------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity MIPS is -- DO NOT modify the interface (entity)
    Port ( 	
			Addr_Instr 		: out STD_LOGIC_VECTOR (31 downto 0);
			Instr 			: in STD_LOGIC_VECTOR (31 downto 0);
			Addr_Data		: out STD_LOGIC_VECTOR (31 downto 0);
			Data_In			: in STD_LOGIC_VECTOR (31 downto 0);
			Data_Out			: out  STD_LOGIC_VECTOR (31 downto 0);
			MemRead 			: out STD_LOGIC; 
			MemWrite 		: out STD_LOGIC; 
			RESET				: in STD_LOGIC;
			CLK				: in STD_LOGIC
			);
end MIPS;


architecture arch_MIPS of MIPS is

----------------------------------------------------------------
-- Program Counter
----------------------------------------------------------------
component PC is
	Port(	
			PC_in 	: in STD_LOGIC_VECTOR (31 downto 0);
			PC_out 	: out STD_LOGIC_VECTOR (31 downto 0);
			RESET		: in STD_LOGIC;
			CLK		: in STD_LOGIC);
end component;

----------------------------------------------------------------
-- ALU
----------------------------------------------------------------
component ALU is
    Port ( 	
			ALU_InA 		: in  STD_LOGIC_VECTOR (31 downto 0);				
			ALU_InB 		: in  STD_LOGIC_VECTOR (31 downto 0);
			ALU_Out 		: out STD_LOGIC_VECTOR (31 downto 0);
			ALU_Control	: in  STD_LOGIC_VECTOR (7 downto 0);
			ALU_zero		: out STD_LOGIC);
end component;

----------------------------------------------------------------
-- Control Unit
----------------------------------------------------------------
component ControlUnit is
    Port ( 	
			opcode 		: in   STD_LOGIC_VECTOR (5 downto 0);
			ALUOp 		: out  STD_LOGIC_VECTOR (1 downto 0);
			Branch 		: out  STD_LOGIC;
			Jump	 		: out  STD_LOGIC;				
			MemRead 		: out  STD_LOGIC;	
			MemtoReg 	: out  STD_LOGIC;	
			InstrtoReg	: out  STD_LOGIC; -- true for LUI. When true, Instr(15 downto 0)&x"0000" is written to rt
			MemWrite		: out  STD_LOGIC;	
			ALUSrc 		: out  STD_LOGIC;	
			SignExtend 	: out  STD_LOGIC; -- false for ORI 
			RegWrite		: out  STD_LOGIC;	
			RegDst		: out  STD_LOGIC);
end component;

----------------------------------------------------------------
-- Register File
----------------------------------------------------------------
component RegFile is
    Port ( 	
			ReadAddr1_Reg 	: in  STD_LOGIC_VECTOR (4 downto 0);
			ReadAddr2_Reg 	: in  STD_LOGIC_VECTOR (4 downto 0);
			ReadData1_Reg 	: out STD_LOGIC_VECTOR (31 downto 0);
			ReadData2_Reg 	: out STD_LOGIC_VECTOR (31 downto 0);				
			WriteAddr_Reg	: in  STD_LOGIC_VECTOR (4 downto 0); 
			WriteData_Reg 	: in STD_LOGIC_VECTOR (31 downto 0);
			RegWrite 		: in STD_LOGIC; 
			CLK 				: in  STD_LOGIC);
end component;

----------------------------------------------------------------
-- ALU Control Unit
----------------------------------------------------------------

component ALU_Control_Unit is
	Port (
			Instruction_Low : in STD_LOGIC_VECTOR (5 downto 0);
			ALUOp_in : in STD_LOGIC_VECTOR(1 downto 0);
			ALUControl_out : out STD_LOGIC_VECTOR(7 downto 0));
end component;

----------------------------------------------------------------
-- Write Address Multiplexer
----------------------------------------------------------------

component Write_Addr_Multiplexer is
	Port (
			Instr20_16 : in STD_LOGIC_VECTOR (4 downto 0);
			Instr15_11 : in STD_LOGIC_VECTOR (4 downto 0);
			RegDst_in : in STD_LOGIC;
			Write_Addr_out : out STD_LOGIC_VECTOR (4 downto 0)
			);
end component;

----------------------------------------------------------------
-- Read Address Multiplexer
----------------------------------------------------------------

component Read_Addr_Multiplexer is
	Port (
			ReadData2_in : in STD_LOGIC_VECTOR (31 downto 0);
			SignExtend_in : in STD_LOGIC_VECTOR (31 downto 0);
			ALUSrc_in : in STD_LOGIC;
			ALUReadData2_out : out STD_LOGIC_VECTOR (31 downto 0));
end component;

----------------------------------------------------------------
-- PC Multiplexer
----------------------------------------------------------------

component PC_Multiplexer is
	Port (
			PC_Multi_in : in STD_LOGIC_VECTOR (31 downto 0);
			Shifter2_in : in STD_LOGIC_VECTOR (31 downto 0);
			Branch_in : in STD_LOGIC;
			ALU_zero_in : in STD_LOGIC;
			PC_Multi_out : out STD_LOGIC_VECTOR (31 downto 0)
			);
end component;


----------------------------------------------------------------
-- Read Data Multiplexer
----------------------------------------------------------------
component Read_Data_Multiplexer is
	Port (
			Read_Data_in : in STD_LOGIC_VECTOR (31 downto 0);
			ALU_Data_in : in STD_LOGIC_VECTOR (31 downto 0);
			MemToReg_Data_in : in STD_LOGIC;
			Write_Data_out : out STD_LOGIC_VECTOR (31 downto 0));
end component;
----------------------------------------------------------------
-- Shifter2
----------------------------------------------------------------

component Shift_left2 is
	Port (input_32 : in  STD_LOGIC_VECTOR (31 downto 0);
           leftshift_32 : out  STD_LOGIC_VECTOR (31 downto 0));
end component;			

----------------------------------------------------------------
-- Sign_extension
----------------------------------------------------------------
component Sign_extension is
	Port ( input_16 : in  STD_LOGIC_VECTOR (15 downto 0);
           extend_32 : out  STD_LOGIC_VECTOR (31 downto 0));
end component;
----------------------------------------------------------------
-- PC Signals
----------------------------------------------------------------
	signal	PC_in 		:  STD_LOGIC_VECTOR (31 downto 0);
	signal	PC_out 		:  STD_LOGIC_VECTOR (31 downto 0);

----------------------------------------------------------------
-- ALU Signals
----------------------------------------------------------------
	signal	ALU_InA 		:  STD_LOGIC_VECTOR (31 downto 0);
	signal	ALU_InB 		:  STD_LOGIC_VECTOR (31 downto 0);
	signal	ALU_Out 		:  STD_LOGIC_VECTOR (31 downto 0);
	signal	ALU_Control	:  STD_LOGIC_VECTOR (7 downto 0);
	signal	ALU_zero		:  STD_LOGIC;			

----------------------------------------------------------------
-- Control Unit Signals
----------------------------------------------------------------				
 	signal	opcode 		:  STD_LOGIC_VECTOR (5 downto 0);
	signal	ALUOp 		:  STD_LOGIC_VECTOR (1 downto 0);
	signal	Branch 		:  STD_LOGIC;
	signal	Jump	 		:  STD_LOGIC;	
	signal	MemtoReg 	:  STD_LOGIC;
	signal 	InstrtoReg	: 	STD_LOGIC;		
	signal	ALUSrc 		:  STD_LOGIC;	
	signal	SignExtend 	: 	STD_LOGIC;
	signal	RegWrite		: 	STD_LOGIC;	
	signal	RegDst		:  STD_LOGIC;

----------------------------------------------------------------
-- Register File Signals
----------------------------------------------------------------
 	signal	ReadAddr1_Reg 	:  STD_LOGIC_VECTOR (4 downto 0);
	signal	ReadAddr2_Reg 	:  STD_LOGIC_VECTOR (4 downto 0);
	signal	ReadData1_Reg 	:  STD_LOGIC_VECTOR (31 downto 0);
	signal	ReadData2_Reg 	:  STD_LOGIC_VECTOR (31 downto 0);
	signal	WriteAddr_Reg	:  STD_LOGIC_VECTOR (4 downto 0); 
	signal	WriteData_Reg 	:  STD_LOGIC_VECTOR (31 downto 0);
	
----------------------------------------------------------------
-- ALU Control Unit Signals
----------------------------------------------------------------	
	signal 	Instruction_Low : STD_LOGIC_VECTOR (5 downto 0);
	signal	ALUOp_in : STD_LOGIC_VECTOR(1 downto 0);
	signal	ALUControl_out : STD_LOGIC_VECTOR(7 downto 0);

----------------------------------------------------------------
-- Write Address Multiplexer Signals
----------------------------------------------------------------	
	signal 	Instr20_16 : STD_LOGIC_VECTOR (4 downto 0);
	signal	Instr15_11 : STD_LOGIC_VECTOR (4 downto 0);
	signal	RegDst_in : STD_LOGIC;
	signal	Write_Addr_out : STD_LOGIC_VECTOR (4 downto 0);
	
----------------------------------------------------------------
-- Read Address Multiplexer Signals
----------------------------------------------------------------		
	signal ReadData2_in : STD_LOGIC_VECTOR (31 downto 0);
	signal SignExtend_in : STD_LOGIC_VECTOR (31 downto 0);
	signal ALUSrc_in :  STD_LOGIC;
	signal ALUReadData2_out : STD_LOGIC_VECTOR (31 downto 0);

----------------------------------------------------------------
-- Read Data Multiplexer Signals
----------------------------------------------------------------	
	
	signal Read_Data_in : STD_LOGIC_VECTOR (31 downto 0);
	signal ALU_Data_in : STD_LOGIC_VECTOR (31 downto 0);
	signal MemToReg_Data_in : STD_LOGIC;
	signal Write_Data_out : STD_LOGIC_VECTOR (31 downto 0);
	
----------------------------------------------------------------
-- PC Multiplexer Signals
----------------------------------------------------------------	
	signal PC_Multi_in : STD_LOGIC_VECTOR (31 downto 0);
	signal Shifter2_in : STD_LOGIC_VECTOR (31 downto 0);
	signal Branch_in : STD_LOGIC;
	signal ALU_zero_in : STD_LOGIC;
	signal PC_Multi_out : STD_LOGIC_VECTOR (31 downto 0);
	

----------------------------------------------------------------
-- Shifter2 Signals
----------------------------------------------------------------	
	signal input_32 : STD_LOGIC_VECTOR (31 downto 0);
   signal leftshift_32 : STD_LOGIC_VECTOR (31 downto 0);
	
----------------------------------------------------------------
-- Sign_extension Signals
----------------------------------------------------------------
	signal input_16 : STD_LOGIC_VECTOR (15 downto 0);
   signal extend_32 : STD_LOGIC_VECTOR (31 downto 0);
----------------------------------------------------------------
-- Other Signals
----------------------------------------------------------------
	--<any other signals used goes here>
 

----------------------------------------------------------------	
----------------------------------------------------------------
-- <MIPS architecture>
----------------------------------------------------------------
----------------------------------------------------------------
begin

----------------------------------------------------------------
-- PC port map
----------------------------------------------------------------
PC1				: PC port map
						(
						PC_in 	=> PC_in, 
						PC_out 	=> PC_out, 
						RESET 	=> RESET,
						CLK 		=> CLK
						);
						
----------------------------------------------------------------
-- ALU port map
----------------------------------------------------------------
ALU1 				: ALU port map
						(
						ALU_InA 		=> ALU_InA, 
						ALU_InB 		=> ALU_InB, 
						ALU_Out 		=> ALU_Out, 
						ALU_Control => ALU_Control, 
						ALU_zero  	=> ALU_zero
						);
						
----------------------------------------------------------------
-- PC port map
----------------------------------------------------------------
ControlUnit1 	: ControlUnit port map
						(
						opcode 		=> opcode, 
						ALUOp 		=> ALUOp, 
						Branch 		=> Branch, 
						Jump 			=> Jump, 
						MemRead 		=> MemRead, 
						MemtoReg 	=> MemtoReg, 
						InstrtoReg 	=> InstrtoReg, 
						MemWrite 	=> MemWrite, 
						ALUSrc 		=> ALUSrc, 
						SignExtend 	=> SignExtend, 
						RegWrite 	=> RegWrite, 
						RegDst 		=> RegDst
						);
						
----------------------------------------------------------------
-- Register file port map
----------------------------------------------------------------
RegFile1			: RegFile port map
						(
						ReadAddr1_Reg 	=>  ReadAddr1_Reg,
						ReadAddr2_Reg 	=>  ReadAddr2_Reg,
						ReadData1_Reg 	=>  ReadData1_Reg,
						ReadData2_Reg 	=>  ReadData2_Reg,
						WriteAddr_Reg 	=>  WriteAddr_Reg,
						WriteData_Reg 	=>  WriteData_Reg,
						RegWrite 		=> RegWrite,
						CLK 				=> CLK				
						);

----------------------------------------------------------------
-- ALU Control port map
----------------------------------------------------------------
ALUControl1		: ALU_Control_Unit port map
						(
							Instruction_Low => Instruction_Low,
							ALUOp_in => ALUOp_in,
							ALUControl_out => ALUControl_out
						);

----------------------------------------------------------------
-- Write Address Multiplexer port map
----------------------------------------------------------------
WriteAddrMultiplex : Write_Addr_Multiplexer port map
							(
	Instr20_16 => Instr20_16,
	Instr15_11 => Instr15_11,
	RegDst_in => RegDst_in,
	Write_Addr_out => Write_Addr_out
							);
							
----------------------------------------------------------------
-- Read Address Multiplexer port map
----------------------------------------------------------------
ReadAddrMultiplex : Read_Addr_Multiplexer port map
							(
	ReadData2_in => ReadData2_in,
	SignExtend_in => SignExtend_in,
	ALUSrc_in => ALUSrc_in,
	ALUReadData2_out => ALUReadData2_out
							);

----------------------------------------------------------------
-- Read Data Multiplexer port map
----------------------------------------------------------------

ReadDataMultiplex : Read_Data_Multiplexer port map
							(
	Read_Data_in => Read_Data_in,
	ALU_Data_in => ALU_Data_in,
	MemToReg_Data_in => MemToReg_Data_in,
	Write_Data_out => Write_Data_out
							);
----------------------------------------------------------------
-- PC Multiplexer port map
----------------------------------------------------------------							
PCMultiplex : PC_Multiplexer port map
					(
	PC_Multi_in => PC_Multi_in,
	Shifter2_in => Shifter2_in,
	Branch_in => Branch_in,
	ALU_zero_in => ALU_zero_in,
	PC_Multi_out => PC_Multi_out
					);
							
----------------------------------------------------------------
-- Shifter2 port map
----------------------------------------------------------------

Shifter2 : Shift_left2 port map
				(
				input_32 => input_32,
           leftshift_32 => leftshift_32
				);

----------------------------------------------------------------
-- Sign_extension port map
----------------------------------------------------------------
SignExtender : sign_extension port map
					(
					input_16 => input_16,
					 extend_32 => extend_32
					);
					
----------------------------------------------------------------
-- Processor logic
----------------------------------------------------------------
--<Rest of the logic goes here>
	
	--For the TOP module
	Addr_Instr <= PC_out;
	Addr_Data <= ALU_out;
	Data_Out <= ReadData2_Reg;
	
	--For the PC Multiplexer
	PC_Multi_in <= PC_out;
	Shifter2_in <= leftshift_32;
	Branch_in <= Branch;
	
	--For Control Unit
	opcode <= Instr(31 downto 26);
	
	--For PC
	PC_in <= PC_Multi_out;
	
	--For Write_Addr_Multiplexer
	Instr20_16 <= Instr(20 downto 16);
	Instr15_11 <= Instr(15 downto 11);
	RegDst_in <= RegDst;
	
	--For Register File
	ReadAddr1_Reg <= Instr(25 downto 21);
	ReadAddr2_Reg <= Instr(20 downto 16);
	WriteAddr_Reg <= Write_Addr_out;
	WriteData_Reg <= Write_Data_out;
	
	--For Sign Extend
	input_16 <= Instr(15 downto 0);
	
	--For Shift2
	input_32 <= extend_32;
	
	--For Read_Addr_Multiplexer
	ReadData2_in <= ReadData2_Reg;
	SignExtend_in <= extend_32;
	ALUSrc_in <= ALUSrc;
	
	--For ALU
	ALU_InA <= ReadData1_Reg;
	ALU_InB <= ALUReadData2_out;
	ALU_Control <= ALUControl_out;
	
	--For ALU Control
	Instruction_Low <= Instr(5 downto 0);
	ALUOP_In <= ALUOp;
	
	--For Read_Data_Multiplexer
	Read_Data_in <= Data_In;
	ALU_Data_in <= ALU_Out;
	
	

end arch_MIPS;

----------------------------------------------------------------	
----------------------------------------------------------------
-- </MIPS architecture>
----------------------------------------------------------------
----------------------------------------------------------------	
