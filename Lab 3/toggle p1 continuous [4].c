#include <reg51.h>

void MSDelay(unsigned int);

void main(void) {

  while(1) {       //repeat forever

    P1=0x55;      

    MSDelay(250);  //time delay

    P1=0xAA;  

    MSDelay(250);    }}   
//90ns =1275 = 114750ns = 1ms
void MSDelay(unsigned int itime) {
  unsigned int i,j;

  for (i=0; i<itime; i++)

    for (j=0; j<1275; j++); // 1ms delay

}