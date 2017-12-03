/*************************************************************************************
 *
 * teste_2_sysclock
 *
 *  Este programa testa o timer "Sysclock".  Ele incrementa e exibe uma contagem
 *  na tela a cada 1 segundo, usando para isto a fun��o de "callback" do alarme
 *  do temporizador....
 *
 *  Por: Prof. �dson M�lo, em  22/10/2017.
 *
 *
 */


/**********************************************************************************
 *  Arquivos de cabe�alho necess�rios...
 */
#include "sys/alt_stdio.h"
#include "stdlib.h"
#include "sys/time.h"
#include "sys/alt_alarm.h"

//#define 	true 1
//#define 	false 0

alt_u32 ticks_por_segundo;
alt_u32 contagem = 0UL;


alt_u32 intervalo_alarm_callback (void* context);
void imprimeUnsignedDec (alt_u32 numero);


int main (void) {

	static alt_alarm alarm;

	// Valor de base da temporiza��o do timestamp-timer:
	ticks_por_segundo = alt_ticks_per_second ();

	// Configura o temporizador para uma chamada a cada 20 segundos...
	alt_alarm_start ( &alarm, 5 * ticks_por_segundo,
			          intervalo_alarm_callback,		// Fun��o a ser chamada...
			          NULL							// Sem informa��o de contexto...
			         );


	alt_putstr ("\n\tPartida do programa... Contagem em :");
	imprimeUnsignedDec (contagem);

    while(1)
    	;   //  Nada a fazer, enquanto espera as chamadas
    		//  � fun��o de callback...

}

alt_u32 intervalo_alarm_callback (void* context)
{
	// Completaram-se 20 segundos... Incrementa e exibe a contagem..
	alt_putstr ("\n\tDecorridos mais 1s ---> Contagem agora em :");
	imprimeUnsignedDec (++contagem);

	return ticks_por_segundo;
}


void imprimeUnsignedDec (alt_u32 numero)  {

	if ( numero > 9 )  {
		imprimeUnsignedDec (numero/10);
	    alt_printf ("%x", (int) numero%10);
	}
	else
		alt_printf ( "%x", (int) numero);

	return;

}

