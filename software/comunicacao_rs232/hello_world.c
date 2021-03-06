

#include "sys/alt_stdio.h"
#include "altera_up_avalon_rs232.h"
#include "system.h"
#include "unistd.h"
#include <stdio.h>
#include "altera_avalon_pio_regs.h"

#define delay(atraso)	usleep(atraso*1000)

alt_up_rs232_dev *rs232; // Vari�vel que inicia o uart

int read_serial(alt_up_rs232_dev *rs232, int num_dados);
void send_data(alt_u8 data, alt_up_rs232_dev *rs232);
void mover(alt_up_rs232_dev *rs232);

int main()
{
	rs232 = alt_up_rs232_open_dev("/dev/uart_rs232");
	alt_u8 valor = 0x64;
	int teste = 0;
	printf("Programa iniciado!\n");
	delay(100);
	send_data(valor, rs232);
	delay(100);
	//printf("num-dados: %u\n",num_dados);
	while(1){
		//Captura o dado em um vetor
		int caso = read_serial(rs232,1);
		//alt_printf("comando: %x", caso);
		delay(100);
		switch(caso)
		{
		case((int)'Z')://(int) converte o char para ascII
			alt_printf("Zeramento iniciado\n");
		break;
		case((int)'G'):
			alt_printf("Movimento iniciado\n");
		delay(100);
			mover(rs232);

			send_data(0b10101110,rs232);
		break;
		case((int)'A'):
			alt_printf("Aquecimento iniciado.\n");
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_0_BASE, valor);
		break;
		case((int)'F'):
			alt_printf("Setando velocidade.\n");
		break;
		case(10):
		break;
		}
	}
	return 0;
}

int read_serial(alt_up_rs232_dev *rs232, int num_dados){
	alt_u8 *dado;
	alt_u8 *parity_error;
		if(!alt_up_rs232_read_data(rs232, dado, parity_error )){
			alt_u8 **teste = &dado;
			int ok = **teste;
			//alt_printf("teste: %x ok: %x\n", **teste, ok);
			return ok;
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

void mover(alt_up_rs232_dev *rs232){
	alt_printf("Ok!\n");
	int caso = (int)'X';
	int distX=0,distY=0,angA=0,angB=0;
	delay(100);
	if(caso==(int)'X'){
		//distX = read_serial(rs232,1);
		delay(100);
		//alt_printf("Entrou no X %u", distX);
		send_data(0b10101110,rs232);
		IOWR_ALTERA_AVALON_PIO_DATA(HEX_0_BASE, 0x2);
		alt_printf("Moveu eixo X.\n");

	}
	else if(caso==(int)'Y'){
		distY= read_serial(rs232,1);
	}
	else if(caso==(int)'A'){
		angA = read_serial(rs232,1);
	}
	else if(caso==(int)'B'){
		angB = read_serial(rs232,1);
	}
}

