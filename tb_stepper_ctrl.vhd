-----------------------------------------------
---
--
--
--
----------------------------------------------


library ieee;
use ieee.std_logic_1164.all;



entity tb_stepper_ctrl is
end entity tb_stepper_ctrl;


architecture simula of tb_stepper_ctrl is
    signal clk_50Mhz :  std_logic;
    signal rst       :  std_logic;
    signal clk_2Hz   : std_logic_vector(3 downto 0);

begin

	-- unity under test:
	uut:  entity work.stepper_ctrl
	port map (
		clk_50Mhz, rst, clk_2Hz 	
	);
	
	simulando :  process
	begin
		rst <= '1';  -- Reset de partida..
		clk_50Mhz  <=  '0';
		
		wait for 10 ms;  -- Intervalo de reset...
		rst <= '0';  
		
		for cont in integer range 0 to 20000000 loop
		   wait for 10 ns;
			clk_50Mhz <= not clk_50Mhz;			
		
		end loop;
	
	   wait;
		
	end process;


end architecture simula;