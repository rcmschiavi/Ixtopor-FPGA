-- VHDL code for stepper drivers
-- Gera o clock e gerencia os end stops

-- #### Parte da documentação em inglês pois coloquei no github e fiquei com preguiça de traduzir, mas fiz tudo.
 
-- Autor: Rodolfo Cavour Moretti Schiavi

library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.STD_LOGIC_unsigned.all;
use IEEE.NUMERIC_STD.all;

entity stepper_linear is
  port (
    clk_50Mhz : in  std_logic; -- System clock
	 clk_step  : out std_logic :='0'; -- Output clock
	 velocity_in : in std_logic_vector(3 downto 0) :="0101"; -- velocity_in com 16 opções de velocidade, pode ser aumentado
	 distance_in : in integer range 0 to 511 := 50; -- milimetros/2 que será movimentado
	 reset : in std_logic := '1'; -- Reset para limpar as variáveis
	 dir_in: in std_logic;	-- Direção de movimento, necessário, pois o end stop está dentro desse bloco
	 dir: out std_logic;	-- Saída da direção para o driver
	 end_stop_p,end_stop_m: in std_logic := '0'; -- end stop para as duas direções
	 end_stop: out std_logic := '1'; -- saida de end stop para informar a cpu
	 busy: out std_logic:='1' -- Lógica para informar que a máquina está em movimento
	 );
end stepper_linear;

architecture Behavioral of stepper_linear is
	signal state: std_logic :='0'; 
	signal signal_dir: std_logic:=dir_in;
	signal signal_end_stop: std_logic:='1';
	signal sig_busy: std_logic:='1';

begin
   PROCESS (clk_50Mhz, velocity_in, reset,dir_in,end_stop_p,end_stop_m,distance_in)

   VARIABLE t :INTEGER RANGE 0 TO 2097151:= 0; -- Contador de tempo
	Variable dividend_acel: INTEGER RANGE 0 TO 5000020:= 5000000;	-- Variável para aplicar aceleração
   CONSTANT dividend :INTEGER RANGE 0 TO 1048575:= 498047;	-- divisor de clock para adequar ao step
	variable distance: integer range 0 to 65535 := distance_in*114; -- conversão dos 1,8 graus por passo e passo de 1,75mm/rev
																						-- para mudar esse valor, segue a relação: 360/(1,75*1,8)
  

	BEGIN
		IF (clk_50Mhz'EVENT AND clk_50Mhz='1') THEN
			IF (velocity_in > 0) and (distance > 0) and (reset='1') THEN -- Só permite movimentação quando a velocidade e a distancia são maiores que zero
				sig_busy<='0';
				t := t + 1;
				IF (CONV_INTEGER(velocity_in)*t >= dividend_acel) THEN -- Permite mudar o step e, consequentemente, velocidade
				   t := 0;
					state <= not state; -- muda o estado do clock
					distance := distance - 1; -- Decrementa a distância por haver movimento
				END IF;
			END IF;
			IF (dividend_acel > dividend) and (distance > 10) then -- Verifica a distância para aplicar aceleração
					dividend_acel := dividend_acel -1;
			END IF;
			IF(dividend_acel < 5000000) and (distance < 10) then -- Verifica a distância para aplicar desaceleração
				dividend_acel := dividend_acel + 1;
			END IF;
		END IF;
		IF (reset = '0') then -- Reseta as variáveis
			distance:=distance_in*114;
			signal_end_stop<='0';
			signal_dir<=dir_in;
		END IF;
		IF(end_stop_p='0') then -- Verify the end stop +, could be assyncronous, but will not any make difference uder this speed
			-- change the direction and "walk" a little for safety
			distance := 50; 		
			signal_dir <= '0';
		ELSIF(end_stop_m='0') then -- Verify the end stop 
		-- change the direction and "walk" a little for safety
			distance := 50;
			signal_dir <= '1';
		END IF;
		IF(distance=0) or (velocity_in=0) then
			sig_busy<='1';
		END IF;
	END PROCESS;
	
	-- Apply the signals to the ports
	dir<=signal_dir; 
	clk_step<=state;
	busy<=sig_busy;

end Behavioral;