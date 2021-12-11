/* Program to swapping the number using temporary variable
   By Shobhit Kumar Patkar
   email-csl1938@global.org.in
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
 int a,b,c;
 clrscr();

 printf("Enter the value for A \n");
 scanf("%d",&a);

 printf("\nEnter the value for B \n");
 scanf("%d",&b);

 printf("\nBefore Swap A=%d and B=%d \n(press enter to swap) ",a,b);
 getch();

 c=a;
 a=b;
 b=c;

 printf("\nAfter Swap A=%d and B=%d ",a,b);

 getch();

 }








