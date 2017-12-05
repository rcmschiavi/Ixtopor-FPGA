-- VHDL code for stepper drivers
-- Gera o clock e gerencia os end stops
-- Mesmo principio do stepper_linear.vhd, documentação nele.

-- Autor: Rodolfo Cavour Moretti Schiavi

library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.STD_LOGIC_unsigned.all;
use IEEE.NUMERIC_STD.all;

entity stepper_angular is
  port (
    clk_50Mhz : in  std_logic;
	 clk_step  : out std_logic :='0'; 
	 speed_in : in std_logic_vector(3 downto 0) :="0101";
	 distance_in : in integer range 0 to 511 := 50;
	 reset : in std_logic := '1';
	 busy: out std_logic:='0'
	 );
end stepper_angular;

architecture Behavioral of stepper_angular is
	signal state: std_logic :='0'; 
	signal sig_busy: std_logic:='1';		

begin
   PROCESS (clk_50Mhz, speed_in, reset, distance_in)

   VARIABLE t :INTEGER RANGE 0 TO 2097151:= 0; 
	Variable dividend_acel: INTEGER RANGE 0 TO 5000020:= 5000000;	
   CONSTANT dividend :INTEGER RANGE 0 TO 1048575:= 498047;	
	variable distance: integer range 0 to 65535 := distance_in*90; -- Para alcançar certa movimentação em graus
	
	BEGIN
		IF (clk_50Mhz'EVENT AND clk_50Mhz='1') THEN
			IF (speed_in > 0) and (distance > 0) and (reset='0') THEN 
				t := t + 1;
				sig_busy<='0';
				IF (CONV_INTEGER(speed_in)*t >= dividend_acel) THEN 
				   t := 0;
					state <= not state; 
					distance := distance - 1; 
				END IF;
			END IF;
			IF (dividend_acel > dividend) and (distance > 10) then 
					dividend_acel := dividend_acel -1;
			END IF;
			IF(dividend_acel < 5000000) and (distance < 10) then 
				dividend_acel := dividend_acel + 1;
			END IF;
		END IF;
		IF (reset = '1') then 
			distance:=distance_in*90;
		END IF;
		IF(distance=0) or (speed_in=0) then
			sig_busy<='1';
		END IF;
	END PROCESS;
	

	clk_step<=state;
	busy<=sig_busy;

end Behavioral;