/* Program to calculate simple interest
   By Shobhit Kumar Patkar
   email-csl1938@global.org.in
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
 float p,r,t,si;
 clrscr();

 printf("Enter Principal,rate and time \n");
 scanf("%f%f%f",&p,&r,&t);

 si=p*r*t/100.0;


 printf("\n Simple Interest = %f",si);
 getch();

 }