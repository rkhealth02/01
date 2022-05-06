#include <reg51.h>
sbit SW =P1^7;
sbit IND =P1^0;
sbit WAVE =P2^5;
void timer0(void) interrupt 1 {
	WAVE=~WAVE; //toggle pin
	}
void main() {
	SW=1; //make switch input
	TMOD=0x02;
	TH0=0xA4; //TH0=-92
	IE=0x82; //enable interrupt for timer 0
	while (1) {
		IND=SW; //send switch to LED
		}
}
