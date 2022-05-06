#include <reg51.h>
void T0Delay(void);
void main(void){
	while (1) {
		P1=0x55; //01010101
		T0Delay();
		P1=0xAA; //10101010
		T0Delay();
		}
	}
void T0Delay(){
	TMOD=0x01;
	TL0=0x00;
	TH0=0x35; //T0=3500H
	TR0=1;
	while (TF0==0); //3500 INCREMENTED UNTIL IT REACHES TO THE MAXIMUM VALUE OF FFFFH - 0000H
	TR0=0;
}