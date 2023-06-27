// PR2-Q1 write a programe to check whether a number is even or odd using the ternary operator.

#include<stdio.h>
#include<conio.h>

void main(){
int A;
clrscr();
printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
printf("Programe to find Even or Odd number\n");
printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n");
printf("-*-*-*-*-*-*-*-*-*-\n");
printf("Enter any number :");
scanf("%d",&A);
printf("-*-*-*-*--*-*-*-*-*-\n");
(A % 2 == 0)?printf("%d is Even number\n",A)
	    :printf("%d is Odd number\n",A);
getch();
}