/* Program to test the address of automatic created variable of array
   Developd By Shobhit Kumar Patkar
   no 14 Sept 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
  int a[]={10,20,30,40,50},i;
  clrscr();

  getch();

  for(i=0;i<5;i++)
    printf("\na[%d]=%d",i,a[i]);

  getch();

  printf("\n*a=%d",*a);
  printf("\na=%u",a);
  printf("\n&a=%u",&a);


  printf("\na=%u",a);

  getch();















 }