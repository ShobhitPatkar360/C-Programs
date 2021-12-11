/* Program to perform division of two user defined number
   By Shobhit Kumar Patkar
   email-cs1938@global.org.in
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
 int x,y,z;
 clrscr();

 printf("Enter first number \n");
 scanf("%d",&x);

 printf("\nEnter second number \n");
 scanf("%d",&y);

 z=x/y;
 printf("\nProduct of %d and %d is %d",x,y,z);

 getch();

 }