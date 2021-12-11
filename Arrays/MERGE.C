/*Program to merge two arrays in alternative fashion
  Developed By Shobhit Patkar
  on 14 Swpt 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   int a[5],b[5],c[10],i,j;
   clrscr();

   printf("Enter 5 int for array a \n");

   for(i=0;i<=4;i++)
     scanf("%d",&a[i]);

   printf("\nEnter 5 int for array b \n");

   for(i=0;i<=4;i++)
     scanf("%d",&b[i]);

   printf("\nYou have the arrays");

   for(i=0;i<=4;i++)
     printf("\na[%d]=%d \t b[%d]=%d",i,a[i],i,b[i]);

   getch();

 /*  for(i=0,j=0;i<=9;i++)   {     //this is Shobhit Method
     if(i%2==0)
       c[i]=a[j];
     else {
       c[i]=b[j];
       j++;
     }
   }
 */

   for(i=0,j=0;i<=9;i=i+2) {      //  Sir Method Half loop
     c[i] = a[j];
     c[i+1] = b[j];
     j++;
   }


   printf("\n\n");
   for(i=0;i<=9;i++)
     printf("\nc[%d]=%d",i,c[i]);

   getch();
}