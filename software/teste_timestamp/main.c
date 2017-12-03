/*
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

#include <stddef.h>
#include <sys/alt_stdio.h>
#include <sys/alt_timestamp.h>
#include <alt_types.h>
#include <altera_avalon_pio_regs.h>


// Macros para funçõe de uso geral..
#define entrada(PORTA)		IORD_ALTERA_AVALON_PIO_DATA(PORTA)
#define saida(PORTA,DADO)	IOWR_ALTERA_AVALON_PIO_DATA(PORTA,DADO)

void imprimeUnsignedDec (unsigned long numero);

#define CHAVES				SW_BASE
#define	KEY0				1 << 0		// Posição da chave SW0
#define	KEY1				1 << 1		// Posição da chave SW1

int cents, segs, mins; 		// Variáveis para controle de tempo...
alt_u32 ticks;
alt_u32 ticks_p_segundo; 	// Para captura de temporizações...

int main (void)
{

	if (alt_timestamp_start() < 0)
	{
		alt_printf ("\nNão há dispositivo de \"timestamp\" disponível\n");
	}
	else
	{

		ticks_p_segundo = alt_timestamp_freq();
		alt_printf ("\n\nTicks por segundo: ");
		imprimeUnsignedDec ( ticks_p_segundo );

		while (1)  {

			// Se o KEY1 é pressionado,...
			if ( (entrada (CHAVES) & KEY1) == 0 )  {

				// ...espera que o botão seja solto...
				while ( (entrada (CHAVES) & KEY1) == 0 )
					         ;
				// e depois reinicia a contagem de tempo...
				alt_printf ("Começando...\n\n");
				alt_timestamp_start();
			}


			// Se o KEY0 é pressionado, informa o instante desde o início
			// da medição de tempo...
			if (  (entrada (CHAVES) & KEY0) == 0  )  {
				ticks = alt_timestamp();
				cents = (int) (100 * ticks / ticks_p_segundo) % 100;
				segs = (int)  (ticks /ticks_p_segundo) % 60;
				mins = (int) (ticks /ticks_p_segundo) /60;

				alt_printf ("\n\nBotão KEY0 pressionado em: ");
				imprimeUnsignedDec (mins);  alt_putchar (':');
				imprimeUnsignedDec (segs);  alt_putchar (':');
				imprimeUnsignedDec (cents);
				alt_printf (" \n(Correspondente a ");
				imprimeUnsignedDec ( ticks);
				alt_printf (" ticks).\n\n");

				while ( (entrada (CHAVES) & KEY0) == 0  )
					; // Espera que o botão seja solto...

			}
		}
	}


}

/***********************************************************************************
 *
 * 	     A função imprimeUnsignedDec() imprime um valor longo em formato decimal, o que
 * 	não é possível com a função alt_printf().  A função imprimeUnsignedDec() é recursiva,
 * 	o que pode implicar em problema com a pilha para números muito grandes.
 *
 */

void imprimeUnsignedDec (unsigned long numero)  {


	if ( numero > 9 )  {
		imprimeUnsignedDec (numero/10);      // Recursão para números maiores que 9..
	    alt_printf ("%x", (int) numero%10);  // Imprime algarismo menos significativo...
	}
	else
		alt_printf ( "%x", (int) numero);	 // Para algarismo de 0 a 9....

	return;
}
