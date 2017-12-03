---------------------------------------------------------------------
--
----   Projeto: Decodificador de Inteiro de 4 Bits para
--			Display de 7 Segmentos (Anodo Comum)
--
--
--	 Exemplo do Curso Introdutório de VHDL
--
--	 Por: Prof. Édson Mélo, em Abril de 2007
--
---------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;

--  Entidade: Definição das Interfaces de E/S
--			para o Projeto.
entity int4bits_7seg is
port
(
	-- Entrada: Valor inteiro de 0 a 15 (4 bits):
	D						: in std_logic_vector(3 downto 0);
	-- Saidas: Sete segmentos para display de
	--         anodo comum.
	SA					: out bit;
	SB					: out bit;
	SC, SD, SE, SF, SG	: out bit
);
end entity int4bits_7seg;	
	
-- Arquitetura: implementação do comportamento
--				desejado para o circuito.
architecture comportamento  of int4bits_7seg is
    signal  saida: bit_vector (1 to 7);

begin
	
	-- Atribuição de seleção para implementação
	-- de tabela de códigos para o display.	
	with D select
		saida <=  
		    "0000001"  WHEN "0000",  -- Padrão para o "0"
			"1001111"  WHEN "0001",  -- Padrão para o "1"
			"0010010"  WHEN "0010",  -- Padrão para o "2"
			"0000110"  WHEN "0011",  -- Padrão para o "3"
			"1001100"  WHEN "0100",  -- Padrão para o "4"
			"0100100"  WHEN "0101",  -- Padrão para o "5"
			"0100000"  WHEN "0110",  -- Padrão para o "6"
			"0001111"  WHEN "0111",  -- Padrão para o "7"
			"0000000"  WHEN "1000",  -- Padrão para o "8"
			"0001100"  WHEN "1001",  -- Padrão para o "9"
			"0001000"  WHEN "1010", -- Padrão para o "10"
			"1100000"  WHEN "1011", -- Padrão para o "11"
			"0110001"  WHEN "1100", -- Padrão para o "12"
			"1000010"  WHEN "1101", -- Padrão para o "15"
			"0110000"  WHEN "1110", -- Padrão para o "14"
			"0111000"  WHEN OTHERS; -- Caso geral (para o "15") 			
	
	-- Final: Atribuição dos códigos aos segmentos
	--			do display.
	SA <= saida (1); -- Segmento "A"
	SB <= saida (2); -- "B"
	SC <= saida (3); -- "C"
	SD <= saida (4); -- "D"
    SE <= saida (5); -- "E"
    SF <= saida (6); -- "F"
    SG <= saida (7); -- "G" 
     
end architecture comportamento;	
	