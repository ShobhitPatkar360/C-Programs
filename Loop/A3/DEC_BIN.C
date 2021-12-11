/*Program to convert from Decimal to Binary
  Developed By Shobhit Kumar Patkar
  on 30 Aug 2020
*/

  #include<stdio.h>
  #include<conio.h>

  void main()
  {
   long num,bin=0,n,j;
   clrscr();

   printf("Enter a Decimal Number \n");
   scanf("%ld",&num);

   n=num;

   for(j=1; num!=0; )  {
     bin=(num%2)*j+bin;
     num=num/2;
     j=j*10;
   }

   printf("\nBinary of %ld is %ld",n,bin);
   getch();
 }

 /*HYPOTHESIS
   1.When an int was operated with long then the answer was coming wrong
   (special- Type Castin is not working.)
    SOLUTION- Operate all numbere by keeping their format specifier same.

    */