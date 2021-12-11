/* Program to calculate compound interest
   By Shobhit Kumar Patkar
   email-csl1938@global.org.in
*/

 #include<stdio.h>
 #include<conio.h>
 #include<math.h>

 void main()
 {
 float p,r,t,ci;
 clrscr();

 printf("Enter Principal \n");
 scanf("%f",&p);

 printf("\nEnter Rate \n");
 scanf("%f",&r);

 printf("\nEnter Time \n");
 scanf("%f",&t);

 ci=p*pow((1.0+r/100.0),t);



 printf("\n Compound Interest = %f",ci);
 getch();

 }