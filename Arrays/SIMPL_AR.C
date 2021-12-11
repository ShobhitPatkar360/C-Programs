/*Program to accept 5 numbers in an array and print it
  Developed By Shobhit Kumar Patkar
  on 17 Sept 2020
*/

  #include<stdio.h>
  #include<conio.h>

  void main()
  {
    int a[5],i;
    clrscr();

    printf("Enter 5 integers \n");

    for(i=0;i<5;i++)
      scanf("%d",&a[i]);
    getch;

    for(i=0;i<5;i++)
      printf("\na[%d]=%d",i,a[i]);

    getch();
}