/*Program to reverse the given number
  Developed by Shobhit Kumar Patkar
  on 25 Aug 2020
*/

  #include<stdio.h>
  #include<conio.h>

  void main()
  {
   long gNum,lstDig,desNum=0,binary=1,rem;

   clrscr();

   printf("Enter a number to convert it into binary \n");
   scanf("%ld",&gNum);


   for( ; gNum!=0; )  {
     rem=gNum%2;        //binary is the collection of rem (remainders) that are coming from gNum (Enteren Number)
     gNum=(gNum-rem)/2;  //at every loop value is gNum is changed (i.e. divided by 2 at every loop)
     binary=(binary*10)+rem;

    // printf("\ngNum,binary = %ld \t %ld",gNum,binary);
   }

  // printf("\nBefore reverse binary is %ld",binary);































   for( ; binary!=0; )  {          //gNum contains given value which last digit get deteched at every loop
     lstDig=binary%10;             //desNum contains the degits which are deteched by gNum at every loop
     desNum=(desNum*10)+lstDig;
     binary=binary/10;
   //  printf("\nbinary,desNum,lstDig=\t%ld\t%ld\t%ld",binary,desNum,lstDig);
   }
   desNum=desNum/10;
   printf("\nFinally Binary is %ld",desNum);
   getch();
 }