/*Program to find the factorial using pointers
  Developed By Shobhit Kumar Patkar
  on 4 Sept 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   long i,n,fact,*p,*q,*r;
   clrscr();

   fact=1;
   p=&i;
   q=&n;
   r=&fact;

   printf("Enter the number to find the factorial \n");
   scanf("%ld",q);

   for(*p=1;*p<=*q;(*p)++)
     *r=*r**p;
     printf("\nFactorial of %ld is %ld \n",*q,*r);


     getch();
 }