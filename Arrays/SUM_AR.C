/*Program to store the sum of elements in third array and print it
  Developed By Shobhit Kumar Patkar
  on 17 Sept 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   int a[5],b[5],c[5],i;
   clrscr();

   printf("Enter 5 integers for array a \n");

   for(i=0;i<5;i++)
     scanf("%d",&a[i]);

   printf("\nEnter 5 integers for array b \n");

   for(i=0;i<5;i++)
     scanf("%d",&b[i]);

   printf("\nYour arrays \n");
   for(i=0;i<5;i++)
     printf("\na[%d]=%d \t b[%d]=%d",i,a[i],i,b[i]);

   printf("\nYour Sum is following \n");

   for(i=0;i<5;i++) {
     c[i]=a[i]+b[i];
     printf("\nc[%d]=%d",i,c[i]);
   }

   getch();
}