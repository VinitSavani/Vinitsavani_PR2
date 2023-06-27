// PR2_Q2 Write a programe to input electricity unit charges and calculate the totle electricity bill accordingly to the given condition.
/*
totle consumption of units = 500
bill = 714.00

*/
#include<stdio.h>
#include<conio.h>

void main(){
int unit;
float amount,total_amount,surcharge;
clrscr();
printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
printf("Total consumption of Electricity in units:");
scanf("%d",&unit);
printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
if (unit<=50)
{
   amount = unit * 0.50;
}
   else if(unit<=150)
   {
   amount = 25 - (unit - 50) * 0.75;
   }
   else if(unit<=250)
   {
   amount = 100 + (unit - 150) * 1.20;
   }
else
   {
   amount = 220 + (unit - 250) * 1.50;
   }
surcharge = amount * 0.20 ;
total_amount = amount + surcharge;
printf("================================================\n");
printf("Your electricity bill is RS. %0.2f\n",total_amount);
printf("================================================\n");
getch();
}