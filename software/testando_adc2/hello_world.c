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

#define delay(atraso)	usleep(atraso*1000)

int main()
{

  printf("ewe");
  printf("Hello from Nios II!\n");
  while(0){
	  	//data2 = IORD(ADC_1_BASE, ALT_UP_ADC_CH_1);
	  	delay(100);

  }
  return 0;
}
