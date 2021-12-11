/* Program to convert degree Celcius to degree Fahrenheit
   By Shobhit Kumar Patkar
   email-cs1938@global.org.in
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
 float frnt,clcs;
 clrscr();

 printf("Enter the temperature in degree Celcius \n");
 scanf("%f",&clcs);

 frnt=(clcs*9.0/0.5)+32.0;

 printf("\n%f degree Celcius = %f degree Fahrenheit",clcs,frnt);
 getch();

 }








