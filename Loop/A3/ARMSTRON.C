/*Program to print the armstrong number between 100 to 999
  Developed By Shobhit Kumar Patkar
  on 30 Aug 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   long num,n,dig,no,sum;
   clrscr();

   printf("Press enter to print Armstrong number between 100 to 999");
   getch();

   for(n=100;n!=1000;n++)  {
     num=n;
     sum=0;
     while(num!=0)  {
       dig=num%10;
       sum=sum+dig*dig*dig;
       num=num/10;

     }
    // printf("\nSum=%ld,Num=%ld",sum,n);
      if(sum==n) printf("\n%ld is Armstrong number",n);
    }
 getch();
}