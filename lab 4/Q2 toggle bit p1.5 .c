//ROHIT KUMBHAR [RA1911043010041]
#include <reg51.h>
void T0M1Delay(void);
sbit mybit=P1^5;
void main(void){
	while (1) {
		mybit=~mybit;
		T0M1Delay();
	}
}
void T0M1Delay(void){
		TMOD=0x01;
		TL0=0xFD;
		TH0=0x4B;
		TR0=1;
		while (TF0==0);
			TR0=0;
			TF0=0;
}