/*Program to find the value of following
   !1  +  !3  +  !5  +  !7  +
   1^3   2^5    3^7    4^9    .....
   Developed By Shobhit Patkar
   on 30 Aug 2020

*/

  #include<stdio.h>
  #include<conio.h>

  void main()
  {
    long fact,pow;
    int i,j,k;
    double sum=0;
    clrscr();

    for(i=1,j=1;j<=10; i=i+2,j++)  {
      fact=1;
      pow=1;

      for(k=1;k<=i;k++)  {
	fact=fact*k;
      }
      printf("\nFactorial of %d is %ld",i,fact);

      for(k=1;k<=(i+2);k++)  {
	pow=pow*j;
      }
      printf("\nPower value of %d ^ %d =%ld",j,i+2,pow);

      sum=sum+(float)fact/pow;
      printf("\nSum is %f ",sum);
      getch();

    }
    printf("\nFinal Answer is %f",sum);
    getch();
}