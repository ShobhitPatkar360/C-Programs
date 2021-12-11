/*Program to convert number from Binary to Decimal
  Developed by Shobhit Kumar Patkar
  on 30 Aug 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
  long dec=0,bin,n,j=1;
  clrscr();

  printf("Enter a binary number \n");
  scanf("%ld",&bin);

  n=bin;

  for( ; bin!=0; )  {
    dec=dec+((bin%10)*j);
    bin=bin/10;
    j=j*2;
   // printf("\nIn loop dec = %ld \t bin = %ld \t j = %ld",dec,bin,j);
  }

  printf("\nDecimal of %ld is %ld",n,dec);
  getch();
 }

 /*
   HYPOTHESIS
   1.Value is coming very strange from expected
   SOLUTION- there may be lack of initialisatio of special variable

   */