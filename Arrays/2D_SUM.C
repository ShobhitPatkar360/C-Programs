/*Program to sum two 2d arrays
  Developed By Shobhit Kumar Patkar
  on 14 Sept 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   int a[2][2],b[2][2],c[2][2],i,j;
   clrscr();

   printf("\nEnter the values for both a & b arrays simultaniously \n");

   for(i=0;i<2;i++)  {
     for(j=0;j<2;j++)  {
       scanf("%d",&a[i][j]);
       scanf("%d",&b[i][j]);
     }
   }

   printf("\nYour Arrays \n");

   for(i=0;i<2;i++)  {
     for(j=0;j<2;j++) {
       printf("\ta[%d][%d]=%d",i,j,a[i][j]);
     }
   printf("\n");
   }

   printf("\n\n");

   for(i=0;i<2;i++) {
     for(j=0;j<2;j++) {
       printf("\tb[%d][%d]=%d",i,j,b[i][j]);
     }
     printf("\n");
   }

   printf("\n\nNow following is your sum \n");


   for(i=0;i<2;i++) {
     for(j=0;j<2;j++)  {
       c[i][j] = a[i][j] + b[i][j];
     }
   }

   getch();


   for(i=0;i<2;i++) {
     for(j=0;j<2;j++) {
       printf("\tc[%d][%d]=%d",i,j,c[i][j]);
     }
   printf("\n");
 }
 getch();
}