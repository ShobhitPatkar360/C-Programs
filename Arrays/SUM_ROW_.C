/*Program to accept 9 numbers in 3x3 array and display sum of its
  each row and coloumn
  Developed by Shobhit Kumar Patar
  on 23 Sept 2020
  */

  #include<stdio.h>
  #include<conio.h>

  void main()
  {
   int a[3][3],i,j,r,c;
   clrscr();

   printf("Enter 9 numbers of a[3][3] \n");
   for(i=0;i<3;i++) { //  Loop to enter 9 numbers in array a[3][3]
     for(j=0;j<3;j++) {
       scanf("%d",&a[i][j]);
     }
   }

   for(i=0;i<3;i++)  { //  Loop to show the arrays
     for(j=0;j<3;j++) {
       printf("\t a[%d][%d]=%d",j,i,a[i][j]);
     }
     printf("\n");
   }

   //  Followint calculating sum of rows
   for(i=0;i<3;i++) {
     r=0;
     for(j=0;j<3;j++) {
       r=r+a[i][j];
     }
     printf("\nSum of Row %d is %d ",i+1,r);
   }

   printf("\n\n");

   //  Following calculating sum of coloumns
   for(j=0;j<3;j++) {
     c=0;
     for(i=0;i<3;i++) {
       c=c+a[i][j];
     }
     printf("\nSum of Coloumn %d is %d ",j+1,c);
   }
   getch();
}