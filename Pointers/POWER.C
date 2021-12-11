/*Program to find the value when power and base is given
  Developed By Shobhit Kumar Patkar
  on 4 Sept 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   int *i,cnt;
   long b,p,ans,*base,*pow,*val;
   clrscr();

   base=&b;
   pow=&p;
   val=&ans;
   i=&cnt;

   printf("Enter the base and power\n");
   scanf("%ld%ld",base,pow);

   *val=1;

   for(*i=1;*i<=*pow;(*i)++)
     *val=*val**base;

   printf("\n%ld^%ld=%ld",*base,*pow,*val);

   getch();
}