#include <reg51.h>
sbit inbit=P1^0;
sbit outbit=P2^7;
bit membit; //use bit to declare
//bit- addressable memory
void main(void)
	{
		while (1)
		{
			membit=inbit; //get a bit from P1.0
			outbit=membit; //send it to P2.7
		}
	}
