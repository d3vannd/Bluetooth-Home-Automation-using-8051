#include<reg51.h>
sbit switch1=P1^0;
sbit switch2=P1^1;
sbit switch3=P1^2;
sbit switch4=P1^3;

void main(){
   unsigned char x;
   SCON=0X50;
   TMOD=0X20;
   TH1=-3;
   TR1=1;
   P1=0X00;
   while(1){
     while(RI==0);
     x=SBUF;
     while(TI==0);
     TI=0;
     RI=0;
     if(x=='1')
     {
        switch1=1;
     }
     if(x=='2')
     {
        switch1=0;
      }
       if(x=='3')
     {
        switch2=1;
     }
     if(x=='4')
     {
        switch2=0;
      }
      if(x=='5')
     {
        switch3=1;
     }
     if(x=='6')
     {
        switch3=0;
      }
       if(x=='7')
     {
        switch4=1;
     }
     if(x=='8')
     {
        switch4=0;
      }
      if(x=='0')
     {
        switch1=switch2=switch3=switch4=0;
     }
      if(x=='9')
     {
        switch1=switch2=switch3=switch4=1;
     }
   }
 }

    

   