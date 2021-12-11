/*Program to print prime numbers up to given numbers
  Developed by Shobhit Patkar
  on 19 Sept 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   int *num,*n;
   int a,b,k,*i,*j,*isPrime;
   clrscr();

   i=&a;
   j=&b;
   isPrime=&k;
   num=&n;

   printf("Enter the number up to which you want to see prime numbers \n");
   scanf("%d",num);

   for(*i=2;*i<=*num;(*i)++) {

     for(*j=2;*j<=*i/2;(*j)++) {
       *isPrime=1;

       if(*i%*j==0) {
	 *isPrime=0;
	 break;
       }
       else
	 *isPrime=1;
     }

     if(*isPrime==1)
     printf("\n%d is Prime",*i);
  }
  getch();
 }