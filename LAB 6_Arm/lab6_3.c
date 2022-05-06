
#include<lpc214x.h>
int count = 0;
int main (void)
{
	unsigned int value=0;
	PINSEL1 = 0X00080000;
	while(1)
	{
		for (count=0; count<1023; count++)
		{
			value =1023;
			DACR = (value<<6);
		}
		for (count=0; count<1023; count++)
		{
			value =0;
			DACR = (value<<6);
		}
	}
}