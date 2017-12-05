
module sopc_2 (
	botao_export,
	clk_clk,
	entrada_c_export,
	hex0_export,
	hex1_export,
	hex2_export,
	hex3_export,
	hex5_export,
	hex_4_export,
	motora_export,
	motorb_export,
	motorx_export,
	motory_export,
	porta_a_export,
	porta_b_export,
	reset_reset_n,
	saida_c_export,
	spi_MISO,
	spi_MOSI,
	spi_SCLK,
	spi_SS_n,
	sw_export,
	to_export,
	uart_1_RXD,
	uart_1_TXD);	

	input		botao_export;
	input		clk_clk;
	input	[7:0]	entrada_c_export;
	output	[7:0]	hex0_export;
	output	[7:0]	hex1_export;
	output	[7:0]	hex2_export;
	output	[7:0]	hex3_export;
	output	[7:0]	hex5_export;
	output	[7:0]	hex_4_export;
	output	[15:0]	motora_export;
	output	[15:0]	motorb_export;
	output	[15:0]	motorx_export;
	output	[15:0]	motory_export;
	inout	[7:0]	porta_a_export;
	inout	[7:0]	porta_b_export;
	input		reset_reset_n;
	output	[7:0]	saida_c_export;
	input		spi_MISO;
	output		spi_MOSI;
	output		spi_SCLK;
	output	[1:0]	spi_SS_n;
	input	[9:0]	sw_export;
	output		to_export;
	input		uart_1_RXD;
	output		uart_1_TXD;
endmodule
