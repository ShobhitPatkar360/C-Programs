/*Program to print the factorial of given number
  Developed by Shobhit Kumar Patkar
  on 25 Aug 2020
*/

 #include<stdio.h>
 #include<conio.h>


 void main()
 {
   long num, fact=1, i; //  ranges  int -32,768 to +32,767
   clrscr();                    //  unsigned int 0 to + 65,535
				//  long -9(then 18 dig) to +9(then 18 dig)
   printf("Enter non number to find factorial \n");
   scanf("%ld",&num);



   for( i=1; i <= num; i++)  {
     fact=fact*i;
   //  printf("\nvalue of fact inside loop = %ld",fact);
   //  getch();
   }

   printf("\n final value of fact = %ld",fact);



   getch();

}