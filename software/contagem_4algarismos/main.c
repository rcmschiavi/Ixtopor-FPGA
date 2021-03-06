/*
 ============================================================================
 * Projeto: contagem_decimal
 *
 * Autor:   �dson M�lo.
 * Vers�o:  0.9
 *
 * Objetivo:  Exibir nos mostradores de 7 segmentos uma contagem decimal de
 * 			quatro algarismos, incrementada periodicamente...
 * 			A contagem � exibida tamb�m, no formato hexadecimal, no console
 * 			do sistema NIOS II.
 *
  ============================================================================
 */


#include "sys/alt_stdio.h"
#include "altera_avalon_pio_regs.h"
#include "unistd.h"
#include "system.h"


/*******************************************************************************/
// Define as portas para sa�da dos algarismos..
#define DISPLAY_UN 	HEX_0_BASE   // mostrador para unidades..
#define DISPLAY_DZ 	HEX_1_BASE   // mostrador para dezenas..
#define DISPLAY_CN 	HEX_2_BASE   // mostrador para centenas..
#define DISPLAY_ML 	HEX_3_BASE   // mostrador para milhares..


#define saida(porta, valor)	IOWR_ALTERA_AVALON_PIO_DATA(porta, valor)
#define delay(atraso)	usleep(atraso*1000)

/*******************************************************************************/

unsigned char decodif[16] = // Array com o c�digo de cada algarismo
	{
	0x81, 0xCF, 0x92, 0x86, // 0,1,2,3
	0xCC, 0xA4, 0xA0, 0x8F, // 4,5,6,7
	0x80, 0x8C, 0x88, 0xE0, // 8,9,A,B
	0xB1, 0xC2, 0xB0, 0xB8  // C,D,E,F
	};


unsigned int contagem = 0; //  Vari�vel para um algarismo...
unsigned int  retardo;		//  Vari�vel para retardo entre incrementos...

void atualiza_display ( unsigned int valor);

/*******************************************************************************
 *
 *
 * Programa principal: Executa uma contagem simples, de um algarismo
 * hexadecimal... A contagem � exibida no console e nos mostradores de
 * 7 segmentos "display_0".
 *
 *
 */

int main (void)
{

	contagem = 0;
	retardo = 900;

	while (1)  {
		// Exibe o valor da contagem...
		alt_printf ("\nContagem atual: %x", contagem);	// ..na console..
		atualiza_display (contagem);					// e nos mostradores de 7 seg.

		//  Pausa antes da pr�xima itera��o
		// (acelerada conforme a contagem cresce)...
		if       ( contagem > 900)  retardo = 5;
		else if  ( contagem > 200)  retardo = 20;
		else if  ( contagem >  60)  retardo = 80;
		else if  ( contagem >  15)  retardo = 300;
		delay (retardo);

		// Incrementa a contagem, at� 9999, e ent�o a reinicia...
		contagem++;
		if ( contagem > 9999)  contagem = 0;


	}

}

/*******************************************************************************
 *    Fun��o para exibi��o de valor de quatro algarismos, sem sinal..
 *
 */
void atualiza_display ( unsigned int valor)  {

	char algarismo;

	// Isola e exibe algarismo para unidades:
	algarismo = valor % 10;
	saida (DISPLAY_UN, decodif [ (int) algarismo]);
	valor = valor / 10; // Para exibir os algarismos restantes...

	// Isola e exibe algarismo para dezenas:
	algarismo = valor % 10;
	saida (DISPLAY_DZ, decodif [ (int) algarismo]);
	valor = valor / 10; // Para exibir os algarismos restantes...

	// Isola e exibe algarismo para centenas:
	algarismo = valor % 10;
	saida (DISPLAY_CN, decodif [ (int) algarismo]);
	valor = valor / 10; // Para exibir os algarismos restantes...

	// Isola e exibe algarismo para milhares:
	algarismo = valor % 10;
	saida (DISPLAY_ML, decodif [ (int) algarismo]);
	valor = valor / 10; // Para exibir os algarismos restantes...

}

