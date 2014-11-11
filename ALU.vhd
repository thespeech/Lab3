----------------------------------------------------------------------------------
-- Company: NUS
-- Engineer: Rajesh Panicker
-- 
-- Create Date:   10:39:18 13/09/2014
-- Design Name: 	ALU
-- Target Devices: Nexys 4 (Artix 7 100T)
-- Tool versions: ISE 14.7
-- Description: ALU template for MIPS processor
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.03 - Asserting reset will cause everything in the MULTI_CYCLE_PROCESS to be reset 
-- Additional Comments: 
--
----------------------------------------------------------------------------------


------------------------------------------------------------------
-- ALU Entity
------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity alu is
generic (width 	: integer := 32);
Port (Clk			: in	STD_LOGIC;
		Control		: in	STD_LOGIC_VECTOR (5 downto 0);
		Operand1		: in	STD_LOGIC_VECTOR (width-1 downto 0);
		Operand2		: in	STD_LOGIC_VECTOR (width-1 downto 0);
		Result1		: out	STD_LOGIC_VECTOR (width-1 downto 0);
		Result2		: out	STD_LOGIC_VECTOR (width-1 downto 0);
		ALU_zero		: out STD_LOGIC;
		Status		: out	STD_LOGIC_VECTOR (2 downto 0); -- busy (multicycle only), overflow (add and sub), zero (sub)
		Debug			: out	STD_LOGIC_VECTOR (width-1 downto 0));		
end alu;


------------------------------------------------------------------
-- ALU Architecture
------------------------------------------------------------------

architecture Behavioral of alu is

type states is (COMBINATIONAL, MULTI_CYCLE);
signal state, n_state 	: states := COMBINATIONAL;


----------------------------------------------------------------------------
-- Adder instantiation
----------------------------------------------------------------------------
component adder is
generic (width : integer);
port (A 		: in 	std_logic_vector(width-1 downto 0);
		B 		: in 	std_logic_vector(width-1 downto 0);
		C_in 	: in 	std_logic;
		S 		: out std_logic_vector(width-1 downto 0);
		C_out	: out std_logic);
end component adder;

component shifter is
    Port ( Control : in  STD_LOGIC_VECTOR (2 downto 0);
           OP1 : in  STD_LOGIC_VECTOR (31 downto 0);
           OP2 : in  STD_LOGIC_VECTOR (4 downto 0);
           Result1 : out  STD_LOGIC_VECTOR (31 downto 0);
           Result2 : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

----------------------------------------------------------------------------
-- Adder signals
----------------------------------------------------------------------------
signal C_in 	: std_logic := '0';
signal S 		: std_logic_vector(width-1 downto 0) := (others => '0'); 
signal C_out	: std_logic := '0'; --not used

signal shift_result1: std_logic_vector(31 downto 0) := (others => '0');
signal shift_result2: std_logic_vector(31 downto 0) := (others => '0');


----------------------------------------------------------------------------
-- Signals for MULTI_CYCLE_PROCESS
----------------------------------------------------------------------------
signal Result1_multi		: STD_LOGIC_VECTOR (width-1 downto 0) := (others => '0'); 
signal Result2_multi		: STD_LOGIC_VECTOR (width-1 downto 0) := (others => '0');
signal Debug_multi		: STD_LOGIC_VECTOR (width-1 downto 0) := (others => '0'); 
signal done		 			: STD_LOGIC := '0';
signal count2				: STD_LOGIC_VECTOR(15 downto 0) := (others => '0');
signal Sub_vec : std_logic_vector(width-1 downto 0) := (others => '1');
--signal count : 			std_logic_vector(15 downto 0) := (others => '0');

begin

-- <port maps>
adder32 : adder generic map (width =>  width) port map (  A=>Operand1, B=>Operand2, C_in=>C_in, S=>S, C_out=>C_out );
-- </port maps>
shifter32 : shifter port map (Control => Control(4 downto 2), 
           OP1 => Operand1,
           OP2 => Operand2(4 downto 0),
           Result1 => shift_result1,
           Result2 => shift_result2);


----------------------------------------------------------------------------
-- COMBINATIONAL PROCESS
----------------------------------------------------------------------------
COMBINATIONAL_PROCESS : process (
											Control, Operand1, Operand2, state, -- external inputs
											S, -- ouput from the adder (or other components)
											Result1_multi, Result2_multi, Debug_multi, done -- from multi-cycle process(es)
											)
begin

-- <default outputs>
Status(2 downto 0) <= "000"; -- both statuses '0' by default 
Result1 <= (others=>'0');
Result2 <= (others=>'0');
ALU_zero <= '0'; -- default. changed only by BEQ
Debug <= (others=>'0');
n_state <= state;

C_in <= '0';
-- </default outputs>

--reset
if Control(5) = '1' then
	n_state <= COMBINATIONAL;
else

case state is
	when COMBINATIONAL =>
		case Control(4 downto 0) is
		--and
		when "00000" =>   -- takes 0 cycles to execute
			Result1 <= Operand1 and Operand2;
		--or
		when "00001" =>
			Result1 <= Operand1 or Operand2;
		--nor
		when "01100" => 
			Result1 <= Operand1 nor Operand2;
		--xor
		when "00100" =>
			Result1 <= Operand1 xor Operand2;
		--add
		when "00010" =>
			Result1 <= S;
			-- overflow
			Status(1) <= ( Operand1(width-1) xnor  Operand2(width-1) )  and ( Operand2(width-1) xor S(width-1) );
		-- sub
		when "00110" =>
			C_in <= '1';
			Result1 <= S;
			-- overflow
			Status(1) <= ( Operand1(width-1) xor  Operand2(width-1) )  and ( Operand2(width-1) xnor S(width-1) );
			--zero
			if S = x"00000000" then 
				Status(0) <= '1'; 
			else
				Status(0) <= '0';
			end if;
		-- Set on less than
		when "00111" =>
			if (Operand1(31) xor Operand2(31)) = '0' then --Sign difference
				C_in <= '1';
				if S(31) = '1' then
					Result1<=x"00000001";
				else
					Result1<=x"00000000";
				end if;
			elsif Operand1(31) = '1' then
				Result1<=x"00000001";
			else
				Result1<=x"00000000";
			end if;
		-- sltu
		when "01110" =>
			C_in <= '1';
			if S(31) = '1' then
				Result1<=x"00000001";
			else
				Result1<=x"00000000";
			end if;
		-- beq
		when "01111" =>
			C_in <= '1';
			Result1 <= S;
			-- overflow
			Status(1) <= ( Operand1(width-1) xor  Operand2(width-1) )  and ( Operand2(width-1) xnor S(width-1) );
			--zero
			if S = x"00000000" then 
				ALU_zero <= '1'; 
			else
				ALU_zero <= '0';
			end if;
		
		-- ori
		when "01110" =>
			
		
		
		when "00101"|"01101"|"01001" =>
			Result1 <= shift_result1;	
		-- multi-cycle operations
		when "10000" | "11110" | "10001" | "10010" | "10011"	=> 
			n_state <= MULTI_CYCLE;
			Status(2) <= '1';
		-- default cases (already covered)
		when others=> null;
		end case;
	when MULTI_CYCLE => 
		if done = '1' then
			Result1 <= Result1_multi;
			Result2 <= Result2_multi;
			Debug <= Debug_multi;
			n_state <= COMBINATIONAL;
			Status(2) <= '0';
		else
			Status(2) <= '1';
			n_state <= MULTI_CYCLE;
		end if;
	end case;
end if;	
end process;


----------------------------------------------------------------------------
-- STATE UPDATE PROCESS
----------------------------------------------------------------------------

STATE_UPDATE_PROCESS : process (Clk) -- state updating
begin  
   if (Clk'event and Clk = '1') then
		state <= n_state;
   end if;
end process;

----------------------------------------------------------------------------
-- MULTI CYCLE PROCESS
----------------------------------------------------------------------------

MULTI_CYCLE_PROCESS : process (Clk) -- multi-cycle operations done here
-- assume that Operand1 and Operand 2 do not change while multi-cycle operations are being performed
variable temp_sum : 		std_logic_vector(2*width-1 downto 0) := (others => '0');
variable bitcount : 		integer range 0 to 31;
variable OPshift : 		std_logic_vector(2*width-1 downto 0) := (others=> '0');
variable negativeflag : std_logic;
variable count:			std_logic_vector(15 downto 0) := (others=>'0');

variable quotient :		std_logic_vector(width-1 downto 0) := (others=> '0');
variable divisor :		std_logic_vector(width-1 downto 0) := (others=> '0');
variable remainder:		std_logic_vector(width-1 downto 0) := (others=> '0');

variable quotient_unsigned :		std_logic_vector(width downto 0) := (others=> '0');
variable remainder_unsigned:		std_logic_vector(width downto 0) := (others=> '0');

variable dividend_original: std_logic_vector(width-1 downto 0) := (others=> '0');
variable divisor_original: std_logic_vector(width-1 downto 0) := (others => '0');
variable divisor_original_unsigned: std_logic_vector(width-1 downto 0) := (others => '0');

variable multiplicand:	std_logic_vector(width-1 downto 0) := (others=> '0');
variable multiplier:		std_logic_vector(width-1 downto 0) := (others=> '0');
variable multiplicand_original:	std_logic_vector(width-1 downto 0) := (others=> '0');
variable multiplicand_original_unsigned:	std_logic_vector(width-1 downto 0) := (others=> '0');
variable multiplier_original:		std_logic_vector(width-1 downto 0) := (others=> '0');


begin  
   if (Clk'event and Clk = '1') then 
		if Control(5) = '1' then
			count := (others => '0');
			temp_sum := (others => '0');
		end if;
		done <= '0'; --done is reset here
		if n_state = MULTI_CYCLE then
			case Control(4 downto 0) is
			when "11110" => -- takes 1 cycle to execute, just returns the operands
				if state = COMBINATIONAL then
					Result1_multi <= Operand1;
					Result2_multi <= Operand2;
					Debug_multi <= Operand1(width-1 downto width/2) & Operand2(width-1 downto width/2);
					done <= '1';
				end if;
			
			when "10000" =>
				if state = COMBINATIONAL then
					count := (others => '0');
					multiplicand := (others => '0');
					multiplier := Operand2;
					multiplicand_original := Operand1;
					multiplicand_original_unsigned := Operand1;
					multiplier_original := Operand2;
					if multiplicand_original(width-1) = '1' then
						multiplicand_original_unsigned := (multiplicand_original xor x"FFFFFFFF") + 1;
					end if;
					if multiplier(width-1) = '1' then
						multiplier := (multiplier xor x"FFFFFFFF") + 1;
					end if;
				else
				if multiplier(0) = '1' then
					multiplicand := multiplicand + multiplicand_original_unsigned;
				end if;
					
				multiplier := multiplicand(0) & multiplier(width-1 downto 1);
				multiplicand := '0' & multiplicand(width-1 downto 1);					
				count := count + 1;
					
				if count = "00100000" then
					if (multiplicand_original(width-1) xor multiplier_original(width-1)) = '1' then
						multiplier := (multiplier xor x"FFFFFFFF") + 1;
						multiplicand := (multiplicand xor x"FFFFFFFF");
						if multiplier = x"00000000" then
							multiplicand := multiplicand + 1;
						end if;
					end if;
					Result1_multi <= multiplier;
					Result2_multi <= multiplicand;
					done <= '1';
					multiplicand_original := (others=>'0');
					multiplier_original := (others=>'0');
				end if;
				
				end if;
			
			when "10001" =>
				if state = COMBINATIONAL then
					count := (others => '0');
					multiplicand := (others => '0');
					multiplier := Operand2;
					multiplicand_original_unsigned := Operand1;
					multiplier_original := Operand2;

				else
				if multiplier(0) = '1' then
					multiplicand := multiplicand + multiplicand_original_unsigned;
				end if;
					
				multiplier := multiplicand(0) & multiplier(width-1 downto 1);
				multiplicand := multiplicand(width-1) & multiplicand(width-1 downto 1);					
				count := count + 1;
					
				if count = "00100000" then
--					multiplier := (multiplier xor x"FFFFFFFF") + 1;
--					multiplicand := (multiplicand xor x"FFFFFFFF");
--					if multiplier = x"00000000" then
--						multiplicand := multiplicand + 1;
--					end if;
					if multiplicand(width-1) = '1' then
						multiplicand := multiplicand + multiplier_original;
					end if;
					Result1_multi <= multiplier;
					Result2_multi <= multiplicand;
					done <= '1';
					multiplicand_original_unsigned := (others=>'0');
					multiplier_original := (others=>'0');
				end if;
				
				end if;
				

			when "10010" =>
				if state = COMBINATIONAL then
					if Operand2 = x"00000000" then -- divisor is zero, raise error!
						Result1_multi <= (others => 'X');
						Result2_multi <= (others => 'X');
						done <= '1';
					end if;
					count := (others => '0');
					dividend_original := Operand1;
					divisor_original := Operand2;
					divisor_original_unsigned := Operand2;
					quotient := Operand1;
					divisor := Operand2;
					if quotient(width-1) = '1' then
						quotient := (quotient xor x"FFFFFFFF") + 1;
					end if;
					if divisor(width-1) = '1' then
						divisor := (divisor xor x"FFFFFFFF") + 1;
						divisor_original_unsigned := divisor;
					end if;
					remainder := (others => '0');
				else
				
				if remainder(width-1) = '1' then -- remainder < 0
					remainder := remainder(width-2 downto 0) & quotient(width-1);
					quotient := quotient(width-2 downto 0) & '0';
					
					remainder := remainder + divisor_original_unsigned;					
				else
					remainder := remainder(width-2 downto 0) & quotient(width-1);
					quotient := quotient(width-2 downto 0) & '0';
					
					remainder := remainder + ((Sub_vec xor divisor_original_unsigned) + 1);
					--Sub_vec is filled with 1s to ones' complement remainder
					--remainder := remainder - Operand2;
				end if;
				
				if remainder(width-1) = '1' then
					quotient(0) := '0';
				else
					quotient(0) := '1';
				end if;
				
				count := count + 1;
				
				if count = "00100000" then
					if remainder(width-1) = '1' then
						remainder := divisor_original_unsigned + remainder;
					end if;
					if (dividend_original(width-1) xor divisor_original(width-1)) = '1' then
						quotient := (quotient xor x"FFFFFFFF") + 1;
					end if;
					if (dividend_original(width-1) xor remainder(width-1)) = '1' then
						remainder := (remainder xor x"FFFFFFFF") + 1;
					end if;
					Result1_multi <= quotient;
					Result2_multi <= remainder;
					done <= '1';
					dividend_original := (others=>'0');
					divisor_original := (others=>'0');
					quotient := (others=>'0');
					divisor := (others=>'0');

				end if;
				
				end if;
				
			when "10011" =>
					if state = COMBINATIONAL then
					if Operand2 = x"00000000" then -- divisor is zero, raise error!
						Result1_multi <= (others => 'X');
						Result2_multi <= (others => 'X');
						done <= '1';
					end if;
					count := (others => '0');
					dividend_original := Operand1;
					divisor_original := Operand2;
					divisor_original_unsigned := Operand2;
					quotient_unsigned := '0'&Operand1;
					divisor := Operand2;

					remainder_unsigned := (others => '0');
				else
				
				if remainder_unsigned(width) = '1' then -- remainder < 0
					remainder_unsigned := remainder_unsigned(width-1 downto 0) & quotient_unsigned(width);
					quotient_unsigned := quotient_unsigned(width-1 downto 0) & '0';
					
					remainder_unsigned := remainder_unsigned + ('0'&divisor_original_unsigned);					
				else
					remainder_unsigned := remainder_unsigned(width-1 downto 0) & quotient_unsigned(width);
					quotient_unsigned := quotient_unsigned(width-1 downto 0) & '0';
					
					remainder_unsigned := remainder_unsigned + (('1'&(x"FFFFFFFF" xor divisor_original_unsigned)) + 1);
					--Sub_vec is filled with 1s to ones' complement remainder
					--remainder := remainder - Operand2;
				end if;
				
				if remainder_unsigned(width) = '1' then
					quotient_unsigned(0) := '0';
				else
					quotient_unsigned(0) := '1';
				end if;
				
				count := count + 1;
				
				if count = "00100001" then
					if remainder_unsigned(width) = '1' then
						remainder_unsigned := ('0'&divisor_original_unsigned) + remainder_unsigned;
					end if;
					Result1_multi <= quotient_unsigned(width-1 downto 0);
					Result2_multi <= remainder_unsigned(width-1 downto 0);
					done <= '1';
					dividend_original := (others=>'0');
					divisor_original := (others=>'0');
					quotient_unsigned := (others=>'0');
					divisor := (others=>'0');
				end if;
				
				end if;
					
			when others=> null;
			end case;
		end if;
	end if;
end process;


end Behavioral;