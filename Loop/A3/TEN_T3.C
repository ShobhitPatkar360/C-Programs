/*Program to find value of following
  !1 - !2 + !3 - !4 + !5 - !6 + !7 .......
  Developed by Shobhit Kumar Patkar
  on 31 Aug 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
  long fact,sum=0;
  int i,j,k=1;
  clrscr();


  for(i=1;i<=10;i++)  {// this loop will give i= 1,2,3,..,10
    fact=1;
    for(j=1;j<=i;j++) { // loop for find factorial
      fact=fact*j;       // stiring values in fact box
    }
   // printf("\n!%d=%ld",i,fact);
    if(k) sum=sum+fact; //changing sign alternatively
    else sum=sum-fact;   // Fluctuating value of k from 0 and 1 on every loop
    k=!k;
    printf("\nSum=%ld",sum);
    getch();
  }
  getch();
}