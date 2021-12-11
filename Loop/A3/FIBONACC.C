/*Program to print fibonacci Series
  Developed By Shobhit Patkar
  on 31 Aug 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   int a=0,b=1,c;
   clrscr();

   printf("Press enter to start fabinocc series");
   getch();
   printf("\n%d",a);
   getch();
   printf("\n%d",b);

   for( ; ; ) {
     c=a+b;
     getch();
     printf("\n%d",c);
     a=b;
     b=c;

  }
 }



















 }