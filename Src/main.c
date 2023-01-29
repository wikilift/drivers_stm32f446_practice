

#include <stm32f446xx.h>

void delay(uint32_t cnt){
	while(cnt)
	{	cnt--;
	}
}
int main(void)
{


	for(;;){



	}
//	*(uint32_t *)AHB1ENR |=(1 << 0 );
//	//si no se pone el or se machacan todos los registros, el or impide eso y lo pone en 1
//	*(uint32_t *)0x40020000UL |=(1 << 10 );
//    /* Loop forever */
//	for(;;){
//		*(uint32_t *)0x40020014UL |=(1 << 5 );
//		delay(500000);
//		*(uint32_t *)0x40020014UL &= ~(1 << 5 ); //Pone a 0 al negarla
//	}
}
