/*Program to find value of exponential number
  Developed by Shobhit Kumar Patkar
  on 25 Aug 2020
*/

  #include<stdio.h>
  #include<conio.h>

  void main()
  {
    int i,e,b,val=1;
    clrscr();

    printf("For base ^ exponential \nEnter base \t");
    scanf("%d",&b);
    printf("\nEnter exponent number \t");
    scanf("%d",&e);

    for( i=1 ; i<=e ; i++)  {
      val=val*b;
    }

    printf("\n%d^%d=%d",b,e,val);
    getch();

 }