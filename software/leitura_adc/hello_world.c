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

#include <stdio.h>
#include "altera_up_avalon_adc.h"
#include "system.h"
#include "sys/alt_stdio.h"
#include "unistd.h"
#include "altera_up_avalon_adc_regs.h"
#include "altera_avalon_pio_regs.h"

unsigned char decodif[16] = // Array com o c�digo de cada algarismo
	{
	0x81, 0xCF, 0x92, 0x86, // 0,1,2,3
	0xCC, 0xA4, 0xA0, 0x8F, // 4,5,6,7
	0x80, 0x8C, 0x88, 0xE0, // 8,9,A,B
	0xB1, 0xC2, 0xB0, 0xB8  // C,D,E,F
	};

#define delay(atraso)	usleep(atraso*1000)
#define analogRead(adc, channel) alt_up_adc_read(adc, channel)
#define saida(porta, valor)	IOWR_ALTERA_AVALON_PIO_DATA(porta, valor)
#define hex_0 HEX_0_BASE
#define hex_1 HEX_1_BASE
#define hex_2 HEX_2_BASE
#define hex_3 HEX_3_BASE

int main()
{
  alt_up_adc_dev *adc = alt_up_adc_open_dev("/dev/adc_1"); // Atribue a estrutura do adc
  alt_up_adc_auto_disable(adc); //Desabilita a atualiza��o autom�tica do ADC
  printf("Hello from Nios II!\n");
  delay(100);
  while(1){
	    alt_up_adc_update(adc); //Faz a atualiza��o dos registradores do ADC
	  	delay(100); //Delay para permitir uma melhor vizualiza��o, o
	  	// L�gica para mostrar o resultado dos 12 bits no display
	  	int leitura = analogRead(adc, 0);
	  	int milhares = leitura/1000;
	  	int centenas = (leitura%1000)/100;
	  	int dezenas = (leitura%100)/10;
	  	int unidades = leitura%10;
	  	printf("\nOK %u",leitura );
	  	saida ( hex_0,decodif[unidades]);
	  	saida ( hex_1,decodif[dezenas]);
	  	saida ( hex_2,decodif[centenas]);
	  	saida ( hex_3,decodif[milhares]);
  }
  return 0;
}
