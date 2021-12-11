/*Program to calculate sum of all even numbers up to n numbers
  Developed by Shobhit Kumar Patkar
  on 25 Aug 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
  int num,sum=0;
  clrscr();

  printf("Enter a number to find the sum of its evens \n");
  scanf("%d",&num);
  printf("\nSum of its evens is ");

  for(int i=0; i<=num ; i+=2)  {
    sum+=i;
  }

  printf("%d",sum);
  getch();
}