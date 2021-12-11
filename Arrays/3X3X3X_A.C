/*Program to accept 3x3x3 array and printing it
  Developed by Shobhit Kumar Partkar
  on 30 Sept 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   int i,j,k,a[3][3][3];
   clrscr();

   printf("Enter 27 int for array a[3][3][3] \n");

   for(i=0;i<3;i++)
     for(j=0;j<3;j++)
       for(k=0;k<3;k++)
	 scanf("%d",&a[i][j][k]);

   printf("\n");

   for(i=0;i<3;i++) {
     for(j=0;j<3;j++) {
       for(k=0;k<3;k++) {
	 printf("\t");  // giving some space at left to show that array is printing
	 printf("a[%d][%d][%d]=%d",i,j,k,a[i][j][k]);
	 printf("\t"); // giving space for change of k
       }
       printf("\n"); // giving next line for change of j
     }
     printf("\n\n\n");  // change paragraph of change of i
   }

   getch();
 }