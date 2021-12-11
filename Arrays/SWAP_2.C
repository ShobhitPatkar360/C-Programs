/*Program to swap the the elements of an array in new array
  Developed By Shobhit Kumar Patkar
  on 13 Sept 2020
*/

 #include<stdio.h>
		   //for scanf() & printf()
 #include<conio.h>
		   // for clrscr() & getch()

 void main() //main function
 {
  int a[5],b[5],i; // creating boxes
  clrscr();    // don't see others garbage

  printf("Enter 5 integers \n"); //  for kind information

  for(i=0;i<=4;i++)   //  Loop to scan values for array a[5]
    scanf("%d",&a[i]);

  printf("\nYour Array");
  for(i=0;i<=4;i++)                //  Loop to print a[]
    printf("\na[%d]=%d",i,a[i]);

  getch();

  printf("\nNew Array");
  for(i=0;i<=4;i++)     //  Loop to set values in b[]
    b[i]=a[4-i];

  for(i=0;i<=4;i++)
    printf("\nb[%d]=%d",i,b[i]); // Loop to print values of b[]

  getch();    // holding Screen
}