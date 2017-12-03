/*
 ============================================================================
 * aciona_display_7seg.c
 *
 * Autor:  Por:  Édson Mélo.
 * Versão:  0.9
 *
 * Objetivo:  Exibir um algarismo em display de 7 segmentos.
 *
  ============================================================================
 */


#include "sys/alt_stdio.h"
#include "altera_avalon_pio_regs.h"
#include "unistd.h"
#include "system.h"


/*******************************************************************************/
#define PORT_DISPLAY HEX_0_BASE   // Define a porta saida_A como controle do acionamento dos displays

#define saida(porta, valor)	IOWR_ALTERA_AVALON_PIO_DATA(porta, valor)
#define delay(atraso)	usleep(atraso*1000)

/*******************************************************************************/

unsigned char decodif[16] = // Array com o código de cada algarismo
	{
	0x81, 0xCF, 0x92, 0x86, // 0,1,2,3
	0xCC, 0xA4, 0xA0, 0x8F, // 4,5,6,7
	0x80, 0x8C, 0x88, 0xE0, // 8,9,A,B
	0xB1, 0xC2, 0xB0, 0xB8  // C,D,E,F
	};


unsigned char contagem; //  Variável para um algarismo...

/*******************************************************************************
 *
 *
 * Programa principal: Executa uma contagem simples, de um algarismo
 * hexadecimal... A contagem é exibida no console e no mostrador de
 * 7 segmentos "display_0".
 *
 *
 */

int main (void)
{

	contagem = 0;

	while (1)  {
		// Exibe o valor da contagem...
		alt_printf ("\nContagem atual: %x", contagem);
		saida ( PORT_DISPLAY, decodif[contagem]);

		// Pausa antes da próxima iteração...
		delay (1000);

		// Incrementa a contagem, até 15..
		contagem++;
		contagem = contagem & 0x0F;
	}

}



