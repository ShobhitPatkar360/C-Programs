/*Program to find the value of
  !1  +   !3   +  !5   +  !7   +
  3^3    5^5      7^7     9^9    .......
  Developed by Shobhit Patkar
  on 31 Aug 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   long fact,pow;
   double sum=0.0;
   int i,j;
   clrscr();

   for(i=1;i<20;i++)  { // this loop will generate i=1,3,5,...,19;
     fact=1;
     pow=1;

     for(j=1;j<=i;j++)  { // j=1,2,3,... store in fact box
      fact=fact*j;
     }
     printf("\n!%d=%ld",i,fact);
     for(j=1;j<=(i+2);j++)  {// j is loop counter,run the loop (i+2) times
       pow=pow*(i+2);        // .....to generate (i+2) power of base (i+2)
     }                       // .....for every value of i of external loop
     printf("\n%d^%d=%ld",(i+2),(i+2),pow);
     sum=sum+(float)fact/pow;
     printf("\nSum=%lf",sum);
     getch();
   }
   printf("\nYour Answer=%lf",sum);
   getch();                  // finally print answer;
}