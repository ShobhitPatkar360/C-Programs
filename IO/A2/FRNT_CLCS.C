/* Program to convert Fahrenheit into Celcius
   By Shobhit Kumar Patkar
   email-cs1938@global.org.in
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
 float frnt,clcs;
 clrscr();

 printf("Enter the temperature in degree Fahrenheit \n");
 scanf("%f",&frnt);

 clcs=(frnt-32.0)*5.0/9.0;

 printf("\n%f degree Fahrenhite = %f degree Celucius",frnt,clcs);
 getch();

 }








