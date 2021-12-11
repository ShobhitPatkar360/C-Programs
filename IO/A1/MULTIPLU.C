/* Program to perform multiplication of two user defined number
   By Shobhit Kumar Patkar
   email-cs1938@global.org.in
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
 int m,n,o;
 clrscr();

 printf("Enter first number \n");
 scanf("%d",&m);

 printf("\nEnter second number \n");
 scanf("%d",&n);

 o=m*n;
 printf("\nProduct of %d and %d is %d",m,n,o);

 getch();

 }