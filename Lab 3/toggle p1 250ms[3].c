#include <reg51.h>
void MSDelay(unsigned int);
void main(void)
{
	P0=0x55; 
	P2=0x55;
while (1)
	{
		P0=~P0; //0x55: 0101 0101 ; 0xAA: 1010 1010
		P2=P2^0xFF; //0x55 Ex-ORed 0xFF = P2 itself
		MSDelay(250);
	}
}
void MSDelay(unsigned int itime)
	{
		unsigned int i,j;
		for (i=0;i<itime;i++)
		for (j=0;j<1275;j++);
	}
