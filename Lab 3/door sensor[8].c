#include<reg51.h>
sbit door = P1^1;
sbit buzzer = P1^7;
void delay(unsigned int time);
void main(void)
{
       while(1)
            {
               if(door==1)
                 {
                   buzzer=1;
                   delay(5);
                   buzzer=0;
                   delay(5);
                 }
               else
                 {
                   buzzer=0;
                  }
            }
}             
void delay(unsigned int time)
       {
          unsigned int i,j;
          for(i=0;i<time;i++)
             {         
                 {
                   for(j=0;j<1275;j++);
                }

							}   
				}						 