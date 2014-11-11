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
--signal temp_sum : std_logic_vector(2*width-1 downto 0) := (others => '0');

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
			
		-- slt
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
		when "00101"|"01101"|"01001" =>
			Result1 <= shift_result1;	
		-- multi-cycle operations
		when "10000" | "11110"|"10001"|"10010"|"10011"	=> 
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

variable count : std_logic_vector(15 downto 0) := (others => '0');
variable temp_sum : std_logic_vector(2*width-1 downto 0) := (others => '0');
variable multiply1, multiply2 : std_logic_vector(63 downto 0) := (others => '0');
variable msb : std_logic := '0';

--variable quotient :		std_logic_vector(width-1 downto 0) := (others=> '0');
--variable divisor :		std_logic_vector(width-1 downto 0) := (others=> '0');
--variable remainder:		std_logic_vector(width-1 downto 0) := (others=> '0');
--variable dividend_original: std_logic_vector(width-1 downto 0) := (others=> '0');
--variable divisor_original: std_logic_vector(width-1 downto 0) := (others => '0');
--variable divisor_original_unsigned: std_logic_vector(width-1 downto 0) := (others => '0');
variable quotient : std_logic_vector(width-1 downto 0) := (others => '0'); 
variable remainder: std_logic_vector (width-1 downto 0) := (others => '0'); 

variable dividend: std_logic_vector (2*width-1 downto 0) := (others => '0');
variable divisor : std_logic_vector (2*width-1 downto 0) := (others => '0'); 

variable temp_divisor : std_logic_vector (2*width-1 downto 0) := (others => '0'); 
variable temp_ones : std_logic_vector (2*width-1 downto 0) := (others => '1'); 

variable temp_zeros : std_logic_vector (width-1 downto 0) := (others => '0'); 

variable temp_operand1 :std_logic_vector (width-1 downto 0) := (others => '0'); 
variable temp_operand2 :std_logic_vector (width-1 downto 0) := (others => '0'); 

variable  dividend_start : std_logic := '0' ;
variable  divisor_start : std_logic := '0' ;

-- assume that Operand1 and Operand 2 do not change while multi-cycle operations are being performed


begin  
   if (Clk'event and Clk = '1') then 
		if Control(5) = '1' then
			count := (others => '0');
			count2 <= (others => '0');
			temp_sum := (others => '0');
		end if;
		done <= '0';
		if n_state = MULTI_CYCLE then
			case Control(4 downto 0) is
--			when "10000" =>  -- takes 16 cycles to execute, returns Operand1<<16 ( a terrible way of doing shift - adding the number 16 times :P )
--				if state = COMBINATIONAL then  -- n_state = MULTI_CYCLE and state = COMBINATIONAL implies we are just transitioning into MULTI_CYCLE
--					temp_sum := (others => '0');
--					count := (others => '0');					
--				end if;		
--				count := count+1;	
--				temp_sum := temp_sum + Operand1;
--				if count=x"0010" then	
--					Result1_multi <= temp_sum(width-1 downto 0);
--					Result2_multi <= temp_sum(2*width-1 downto width);
--					Debug_multi <= Operand1(width/2-1 downto 0) & Operand2(width/2-1 downto 0); -- just a random output
--					done <= '1';	
--				end if;
			when "11110" => -- takes 1 cycle to execute, just returns the operands
				if state = COMBINATIONAL then
					Result1_multi <= Operand1;
					Result2_multi <= Operand2;
					Debug_multi <= Operand1(width-1 downto width/2) & Operand2(width-1 downto width/2);
					done <= '1';
				end if;	
			when "10000"|"10001" => --MULT --MULTU
				if state = COMBINATIONAL then  -- n_state = MULTI_CYCLE and state = COMBINATIONAL implies we are just transitioning into MULTI_CYCLE
					temp_sum := (others => '0');
					multiply1(31 downto 0) := Operand1;
					multiply1(63 downto 32) := (others => '0');
					multiply2(31 downto 0) := Operand2;
					multiply2(63 downto 32) := (others => '0');
					if Control(4 downto 0)="10000" then
					multiply1(63 downto 32) := (others => Operand1(31));
					multiply2(63 downto 32) := (others => Operand2(31));
						msb := multiply1(63) xor multiply2(63);
						if multiply1(63)='1' then
							multiply1:= (multiply1-1) xor (x"FFFFFFFFFFFFFFFF");
						end if;
						if multiply2(63)='1' then
							multiply2:= (multiply2-1) xor x"FFFFFFFFFFFFFFFF";
						end if;
					else
						msb := '0';
					end if;
					count := (others => '0');					
				end if;
				
				if multiply2(0)='1' then
					temp_sum := temp_sum + multiply1;
				end if;
				
				multiply1 := multiply1(62 downto 0)&'0';--x2
				multiply2 := '0'&multiply2(63 downto 1);--/2
				count := count+1;
				
				if count=x"00000020" then
					if msb='1' then
						temp_sum := (temp_sum xor x"FFFFFFFFFFFFFFFF") + 1;
					end if;
					Result1_multi <= temp_sum(width-1 downto 0);
					Result2_multi <= temp_sum(2*width-1 downto width);
					Debug_multi <= Operand1;
					done<='1';
				end if;
				
when "10011" | "10010"  =>  --DIVU  /DIV
				
				if state = COMBINATIONAL then  -- n_state = MULTI_CYCLE and state = COMBINATIONAL implies we are just transitioning into MULTI_CYCLE
					
					
					if control = "10011"  then 					
						temp_operand1 := Operand1; 
						temp_operand2 := Operand2;
					
					elsif control ="10010" then 
					
						if Operand1(width-1) = '1' then
						  --2's to get positive result
						  temp_operand1 := not(Operand1) + '1' ; -- 2's		  
						elsif Operand1(width-1) = '0' then		
							temp_operand1 := Operand1; 
						end if;
						
						if Operand2(width-1) = '1' then 
						 --2's to get positive result
						  temp_operand2 := not(Operand2) + '1'  ; -- 2's
						elsif Operand2(width-1) = '0' then   
							temp_operand2 := Operand2;	  
						end if;
						
						dividend_start := Operand1(width-1) ;
						divisor_start := Operand2(width-1) ;
					
					end if;
					
					

					if (( temp_operand1 >  temp_operand2 or  temp_operand1 =  temp_operand2) and (Operand1 /= X"00000000" and Operand2 /= X"00000000") ) then
					--temp_operand1(width-1 downto 0) <= Operand1(width-1 downto 0); 
					--temp_operand2(width-1 downto 0) <= Operand2(width-1 downto 0);
			
						count2 <= (others => '0');		
						quotient := (others => '0');
						remainder := (others => '0');
						temp_divisor := (others => '0');
	
					
						divisor(2*width-1 downto width):=  temp_operand2;       --append 32"000.." at the back OP2
						divisor(width-1 downto 0):= temp_zeros;
						dividend(2*width-1 downto 0):= temp_zeros(width-1 downto 0)& temp_operand1(width-1 downto 0);        --append 32"000.." in front OP1
					
					
					-- dividend is smaller than divisor
					elsif (( temp_operand1 <  temp_operand2) and (Operand1 /= X"00000000" and Operand2 /= X"00000000")) then 
						count2 <= (others => '0');	
						quotient := (others => '0');
						remainder :=  temp_operand1;
						
					elsif (Operand1 = X"00000000" and Operand2 /= X"00000000") then 
						count2 <= (others => '0');
						quotient := (others => '0') ;
						remainder := (others => '0') ;
							
					-- impossible division since divisor is 0 then assign dun care values 
					elsif (Operand2 = X"00000000") then 
						count2 <= (others => '0');	
						quotient := (others => '1') ;
						remainder := (others => '1') ;
			
					end if; 
					
				end if;	
				
				--checking divisor and dividend 
				--quotient <= quotient(width-2 downto 0)&'0'; --logical left shift  --30 downto 0
				
				if (( temp_operand1 >  temp_operand2 or  temp_operand1 =  temp_operand2) and (Operand1 /= X"00000000" and Operand2 /= X"00000000") ) then
					if ((divisor > dividend)) then 
					--dividend stays the same
						divisor := '0'&divisor(2*width-1 downto 1); --logical right shift --63 downto 1
						quotient := quotient(width-2 downto 0)&'0'; --logical left shift  -30 downto 0
					--remainder <= dividend(width-1 downto 0); 
				
					elsif ((divisor < dividend) or (divisor = dividend)) then 
					
					-- A - B
						temp_divisor := (divisor XOR temp_ones)+ X"00000001" ; -- 2's
						dividend := dividend + temp_divisor;  --dividend - divisor 
	
					
						divisor :='0'&divisor(2*width-1 downto 1); --logical right shift --63 downto 1
						quotient :=quotient(width-2 downto 0)&'1'; --append lsb with 1 -30 downto 0
					
					end if;

				remainder := dividend(width-1 downto 0);
				end if;
				
					--indicate one check has been performed
				count2 <= count2+1;	
				
				
				if count2 = X"0020" then --33rd cycle 
					 
					
					if Control = "10010" and (Operand1 /= X"00000000" and Operand2 /= X"00000000") then 
					
						if dividend_start /= divisor_start then 
							--quotient -ve 
							quotient := not (quotient)  + '1' ; 
						end if;
						
						if (dividend_start = '1' and divisor_start = '1') or  (dividend_start = '1' and divisor_start = '0') then
							--remainder -ve 
							remainder := not (remainder)  + '1' ; 
						end if;
					end if;
					
					Result1_multi <= quotient;
					Result2_multi <= remainder;		
					Debug_multi <= (others => '0'); -- just a random output
					count2 <= (others => '0'); --reset count 
					done <= '1';
					
					--end if;			
				end if;
				
			when others=> null;
			end case;
		end if;
	end if;
end process;


end Behavioral;


------------------------------------------------------------------
-- Adder Entity
------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity adder is
generic (width : integer := 32);
port (A 		: in std_logic_vector(width-1 downto 0);
		B 		: in std_logic_vector(width-1 downto 0);
		C_in 	: in std_logic;
		S 		: out std_logic_vector(width-1 downto 0);
		C_out	: out std_logic);
end adder;

------------------------------------------------------------------
-- Adder Architecture
------------------------------------------------------------------

architecture adder_arch of adder is
signal S_wider : std_logic_vector(width downto 0);
signal Inv_array : std_logic_vector(width-1 downto 0);
begin
	Inv_array <= (others => C_in);
	S_wider <= ('0'& A) + ('0'& (B xor Inv_array)) + C_in;
	S <= S_wider(width-1 downto 0);
	C_out <= S_wider(width);
end adder_arch;