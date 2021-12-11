/*Program to reverse the given number
  Developed By Shobhit Kukmar Patkar
  on 30 Aug 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
  long no,rev=0;
  clrscr();

  printf("Enter a number \n");
  scanf("%ld",&no);

  while(no!=0)  {
    rev=rev*10+(no%10);
    no=no/10;
  }

  printf("\nReverse of %ld is %ld",no,rev);
  getch();
}