//ROHIT KUMBHAR [RA1911043010041]
#include <reg51.h>
void main(void){
	TMOD=0x20;
	TH1=0xFA;
	SCON=0x50;
	TR1=1;
	while(1){
		SBUF='C';
		while(TI==0);
		TI=0;
	}
}