#include <reg51.h>
#define LED P2
void main(void)
{
P1=00; //clear P1
LED=0; //clear P2
for (;;) //repeat forever
	{
	P1++; //increment P1
	LED++; //increment P2
	}
}