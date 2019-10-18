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

/*
Another Way!
#include <lpc17xx.h>

//#define LEDON LPC_GPIO2->FIOSET1|=(1<<1);
//#define LEDOFF LPC_GPIO2->FIOCLR1|=(1<<1);
//#define BUZZON LPC_GPIO2->FIOSET1|=(1<<3);
//#define BUZZOFF LPC_GPIO2->FIOCLR1|=(1<<3);
//#define PINFUN_GPIO LPC_PINCON->PINSEL4|=(1<<18)|(1<<19)|(1<<22)|(1<<23); 
//#define DDR2 LPC_GPIO2->FIODIR1|=(1<<3)|(1<<1);

void my_delay(void)
{
	for(int i=0;i<2;i++)
	{
		
	}
}

int main()
{
	LPC_PINCON->PINSEL4&=~((1<<18)|(1<<19)|(1<<22)|(1<<23)); 
	LPC_GPIO2->FIODIR1|=(1<<1);
	LPC_GPIO2->FIOCLR1|=(1<<1);
	while(1)
	{
		LPC_GPIO2->FIOSET1|=(1<<1);
		LPC_GPIO2->FIOSET1|=(1<<3);
		my_delay();
		LPC_GPIO2->FIOCLR1|=(1<<1);
		LPC_GPIO2->FIOCLR1|=(1<<3);
		my_delay();
	}
}
*/
