/*Program to swap the elements of an array without using third element
  Developed by Shobhit Patkar
  on 13 Sept 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
  int m[5],i;
  clrscr();

  printf("Enter 5 integers \n");

  for(i=0;i<=4;i++)
    scanf("%d",&m[i]);

  printf("\nYoru Array Before Swap");

  for(i=0;i<=4;i++)
    printf("\nm[%d]=%d",i,m[i]);
  getch();

  printf("\nYour Array After Swap");
			//  if i<5  then half loop  i<2
  for(i=0;i<=1;i++)  {  //  if i<=4  then half loop i<=1
				  //  if a=10 & b=20
    m[i] = m[i] + m[4-i];         //  a = a + b = 10 + 20 = 30
    m[4-i] = m[i] - m[4-i];       //  b = a - b = 30 - 20 = 10
    m[i] = m[i] - m[4-i];         //  a = a - b = 30 - 10 = 20
  }                               //  finally a=20 & b=10

  for(i=0;i<=4;i++)
    printf("\nm[%d]=%d",i,m[i]);
  getch();
 }