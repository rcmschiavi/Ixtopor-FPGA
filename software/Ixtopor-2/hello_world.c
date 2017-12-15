/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */

#include "sys/alt_stdio.h"
#include "altera_avalon_pio_regs.h"
#include "unistd.h"
#include "system.h"
/*#include <sstream>
#include <iostream>*/

#define motorX MOTORX_BASE   // Define a porta saida_A como controle do acionamento dos displays
#define motorY MOTORY_BASE
#define motorA MOTORB_BASE
#define sigBusy ENTRADA_C_BASE
#define saida(porta, valor)	IOWR_ALTERA_AVALON_PIO_DATA(porta, valor)
#define leitura(porta) IORD_ALTERA_AVALON_PIO_DATA(porta)
#define delay(atraso)	usleep(atraso*1000)

int main()
{

	saida(motorX,0x5FF4); //Reseta e manda os paramentros para andar na velocidade 0110 e 180 em decimal
	saida(motorY,0x5FF4);
	saida(motorA,0x6033);
	delay(100);
	saida(motorX,0x7FF4);//Envia os parãmetros com o reset desativado
	saida(motorY,0x7FF4);
	saida(motorA,0x4033);
	alt_printf ("Motor X em movimento.");

	return 0;
}
