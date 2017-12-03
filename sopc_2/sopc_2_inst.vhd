	component sopc_2 is
		port (
			botao_export     : in    std_logic                     := 'X';             -- export
			clk_clk          : in    std_logic                     := 'X';             -- clk
			entrada_c_export : in    std_logic_vector(7 downto 0)  := (others => 'X'); -- export
			hex0_export      : out   std_logic_vector(7 downto 0);                     -- export
			hex1_export      : out   std_logic_vector(7 downto 0);                     -- export
			hex2_export      : out   std_logic_vector(7 downto 0);                     -- export
			hex3_export      : out   std_logic_vector(7 downto 0);                     -- export
			hex5_export      : out   std_logic_vector(7 downto 0);                     -- export
			hex_4_export     : out   std_logic_vector(7 downto 0);                     -- export
			motor_1_export   : out   std_logic_vector(13 downto 0);                    -- export
			motor2_export    : out   std_logic_vector(13 downto 0);                    -- export
			motor3_export    : out   std_logic_vector(13 downto 0);                    -- export
			motor4_export    : out   std_logic_vector(13 downto 0);                    -- export
			porta_a_export   : inout std_logic_vector(7 downto 0)  := (others => 'X'); -- export
			porta_b_export   : inout std_logic_vector(7 downto 0)  := (others => 'X'); -- export
			reset_reset_n    : in    std_logic                     := 'X';             -- reset_n
			saida_c_export   : out   std_logic_vector(7 downto 0);                     -- export
			spi_MISO         : in    std_logic                     := 'X';             -- MISO
			spi_MOSI         : out   std_logic;                                        -- MOSI
			spi_SCLK         : out   std_logic;                                        -- SCLK
			spi_SS_n         : out   std_logic_vector(1 downto 0);                     -- SS_n
			sw_export        : in    std_logic_vector(9 downto 0)  := (others => 'X'); -- export
			to_export        : out   std_logic;                                        -- export
			uart_rxd         : in    std_logic                     := 'X';             -- rxd
			uart_txd         : out   std_logic                                         -- txd
		);
	end component sopc_2;

	u0 : component sopc_2
		port map (
			botao_export     => CONNECTED_TO_botao_export,     --     botao.export
			clk_clk          => CONNECTED_TO_clk_clk,          --       clk.clk
			entrada_c_export => CONNECTED_TO_entrada_c_export, -- entrada_c.export
			hex0_export      => CONNECTED_TO_hex0_export,      --      hex0.export
			hex1_export      => CONNECTED_TO_hex1_export,      --      hex1.export
			hex2_export      => CONNECTED_TO_hex2_export,      --      hex2.export
			hex3_export      => CONNECTED_TO_hex3_export,      --      hex3.export
			hex5_export      => CONNECTED_TO_hex5_export,      --      hex5.export
			hex_4_export     => CONNECTED_TO_hex_4_export,     --     hex_4.export
			motor_1_export   => CONNECTED_TO_motor_1_export,   --   motor_1.export
			motor2_export    => CONNECTED_TO_motor2_export,    --    motor2.export
			motor3_export    => CONNECTED_TO_motor3_export,    --    motor3.export
			motor4_export    => CONNECTED_TO_motor4_export,    --    motor4.export
			porta_a_export   => CONNECTED_TO_porta_a_export,   --   porta_a.export
			porta_b_export   => CONNECTED_TO_porta_b_export,   --   porta_b.export
			reset_reset_n    => CONNECTED_TO_reset_reset_n,    --     reset.reset_n
			saida_c_export   => CONNECTED_TO_saida_c_export,   --   saida_c.export
			spi_MISO         => CONNECTED_TO_spi_MISO,         --       spi.MISO
			spi_MOSI         => CONNECTED_TO_spi_MOSI,         --          .MOSI
			spi_SCLK         => CONNECTED_TO_spi_SCLK,         --          .SCLK
			spi_SS_n         => CONNECTED_TO_spi_SS_n,         --          .SS_n
			sw_export        => CONNECTED_TO_sw_export,        --        sw.export
			to_export        => CONNECTED_TO_to_export,        --        to.export
			uart_rxd         => CONNECTED_TO_uart_rxd,         --      uart.rxd
			uart_txd         => CONNECTED_TO_uart_txd          --          .txd
		);

