/*
 * timer_sysclock_teste1.c
 *
 *	Este programa ajusta e mant�m a informa��o de hora no sistema,
 *	utilizando o sysclock_timer. Na partida, o programa ajusta a hora
 *	a partir de um valor inicial contido no pr�prio c�digo. A seguir,
 *	o sistema entra em um loop de verifica��o do teclado. Quando alguma
 *	tecla � digitada (seguida de <ENTER>, a hora certa � calculada e
 *	informada.
 *
 *
 *  Created on: 22/10/2017
 *
 *      Author: Edson
 */


#include "sys/alt_stdio.h"
#include "stdlib.h"
#include "sys/time.h"
#include "sys/alt_alarm.h"

#define 	true 1
#define 	false 0

// unsigned int ticks_por_segundo;
unsigned int horas, minutos, segundos, microsegundos;


void imprimeDec (long numero);


int main (void) {

	 struct timeval agora;
	 //  int rc;


	//  Defini��o da hora inicial, de partida do sistema
	//  (entrata textual aqui no c�digo, neste exemplo
	//  simples de c�digo).
	horas = 8, minutos = 15, segundos = 10;
	microsegundos = 0;

	alt_putstr ("\n\nPartida do programa...");
	alt_putstr ("\n\tHora agora: ");
	imprimeDec ( horas); alt_putchar (':');
	imprimeDec (minutos); alt_putchar (':');
	imprimeDec (segundos); alt_putchar ('.');

	alt_putstr ("\n\nEnvia o caractere 'h' para saber a hora...");
//	ticks_por_segundo = alt_ticks_per_second ();

	agora.tv_sec = ( ( horas * 60) + minutos) * 60 + segundos;
    agora.tv_usec = microsegundos;

    settimeofday (&agora, NULL);

    while(1) {


    	if ( alt_getchar() == 'h' ) {

    	    gettimeofday (&agora, NULL);
    	    segundos = agora.tv_sec % 60;
    	    minutos  = (agora.tv_sec / 60) % 60;
    	    horas = agora.tv_sec / 3600;


    		alt_putstr ("\n\n\n\tHora certa: ");
    		imprimeDec ( horas);   alt_putchar (':');
    		imprimeDec (minutos);  alt_putchar (':');
    		imprimeDec (segundos); alt_putchar ('.');

    	}
    }

}


void imprimeDec (long numero)  {

    if (numero < 0) {
       alt_putchar ('-');
       numero = -numero;
    }

	if ( numero > 9 )  {
		imprimeDec (numero/10);
	    alt_printf ("%x", (int) numero%10);
	}
	else  if (numero > 0)
		alt_printf ( "%x", (int) numero);

	else {
	    alt_putchar ('0');
		return;

	}
}
