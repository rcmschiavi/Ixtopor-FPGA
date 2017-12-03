
#include "sys/alt_stdio.h"
#include <system.h>
#include <io.h>


#define leds HEX_0_BASE
#define entrada(base) IORD(base, 0)
#define saida(base,data) IOWR(base, 0, data)
#define configDDR(base,data) IOWR(base, 1, data)

int main()
{
  alt_putstr("Hello from Nios II!\n");

  /* Event loop never exits. */
  while (1){
	  saida(leds,entrada(chaves));

  }

  return 0;
}





