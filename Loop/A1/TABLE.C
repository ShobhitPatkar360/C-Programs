/*Program to printing the table of a given number
  Developed by Shobhit Kumar Patkar
  on 25 Aug 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   int num;
   clrscr();

   printf("Enter a number to print the table \n");
   scanf("%d",&num);
   printf("\n");

   for( int i = 1; i <= 10; i++)  {
     printf("\n%d*%d=%d",num,i,i*num);
   }
   getch();
}