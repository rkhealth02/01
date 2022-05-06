
//ROHIT KUMBHAR [RA1911043010041]
#include <reg51.h>
void main(void){
	TMOD=0x20; //use Timer 1, mode 2
	TH1=0xFA; //4800 baud rate
	SCON=0x50;
	TR1=1;
	while (1) {
		SBUF=‘A’; //place value in buffer
		while (TI==0);
		TI=0;
	}
}