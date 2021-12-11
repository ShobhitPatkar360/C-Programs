/*Program to reverse the given number
  Developed by Shobhit Kumar Patkar
  on 25 Aug 2020
*/

  #include<stdio.h>
  #include<conio.h>

  void main()
  {
   long gNum,lstDig,desNum=0;
   clrscr();

   printf("Enter a number to reverse it \n");
   scanf("%ld",&gNum);

   for( ; gNum!=0; )  {          //gNum contains given value which last digit get deteched at every loop
     lstDig=gNum%10;             //desNum contains the degits which are deteched by gNum at every loop
     desNum=(desNum*10)+lstDig;
     gNum=gNum/10;
   //  printf("\ngNum,desNum,lstDig=\t%ld\t%ld\t%ld",gNum,desNum,lstDig);
   }

   printf("\nFinally Reverse No. is %ld",desNum);
   getch();
 }