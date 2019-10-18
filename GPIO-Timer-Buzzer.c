#include<lpc17xx.h>

int main()
{	unsigned int i;
	//LPC_PINCON->PINSEL4&=~((1 <<22)|(1<<23)| (1 <<19)|(1<<18));



LPC_GPIO2->FIODIR1 |= ((1<<3) | (1<<1));
	while(1)
	{	LPC_GPIO2->FIOCLR1 |= ((1<<3) | (1<<1));
		for(i=0; i<250000; i++);
		LPC_GPIO2->FIOSET1 |= ((1<<3) | (1<<1));
		for(i=0; i<250000; i++);
	}
}
