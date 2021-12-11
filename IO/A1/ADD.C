/* Program to perform addition of two user defined number
   By Shobhit Kumar Patkar
   email-cs1938@global.org.in
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
 int a,b,c;
 clrscr();

 printf("Enter first number \n");
 scanf("%d",&a);

 printf("\nEnter second number \n");
 scanf("%d",&b);

 c=a+b;
 printf("\nSum of %d and %d is %d",a,b,c);

 getch();

 }