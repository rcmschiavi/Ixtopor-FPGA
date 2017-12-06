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
#include "altera_up_avalon_rs232.h"
#include "system.h"
#include "unistd.h"



#define delay(atraso)	usleep(atraso*1000)

alt_up_rs232_dev *rs232; // Vari�vel que inicia o uart

int main()
{
	rs232 = alt_up_rs232_open_dev("/dev/uart_rs232");
	alt_u8 data[128];
	alt_u8 *parity_error=0;
	char *s;
	int i=0;
	printf("Programa iniciado!\n");
	delay(100);
	send_data(0b00001110, rs232);
	delay(3000);
	unsigned num_dados = alt_up_rs232_get_used_space_in_read_FIFO(rs232);
	delay(100);
	//printf("num-dados: %u\n",num_dados);
	while(i<9){
		//Captura o dado em um vetor
		if(!alt_up_rs232_read_data(rs232, data+i, parity_error )){
			//alt_printf("�timo, dado: %alt_u8 \n", (alt_u8*)data);

			char t = (alt_u8)data[i];
			alt_printf("oo %c\n",t);
			alt_printf("%d\n",i);
			i=i+1;
		}
		else{
			//alt_printf("merda\n");
		}

	}
	return 0;
}

void send_data(alt_u8 data, alt_up_rs232_dev *rs232){

	//Envia o dado e verifica se teve exito, n�o parece funcionar a verifical�ao,
	//mas o dado � enviado
	if(!alt_up_rs232_write_data(rs232, data )){
		  alt_printf("Dado enviado.\n");
		}
		else{
		  alt_printf("Algo deu errado.\n");
		}
}
