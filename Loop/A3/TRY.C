#include<stdio.h>
#include<conio.h>

void main()

{
 long num=153,sum=0,dig,n;
 clrscr();
 n=num;

 while(num!=0) {
  dig=num%10;
  sum=sum+dig*dig*dig;
  num=num/10;
 }

 if(sum==n) printf("\nYess");
 else printf("\nNo");


 getch();




}