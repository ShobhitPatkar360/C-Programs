/*Program to find max and min from an array
  Developed by Shobhit Kumar Patkar
  on 17 Sept 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   int a[10],i,max,min;
   clrscr();

   printf("Enter 10 integers for array a \n");
   for(i=0;i<10;i++)
     scanf("%d",&a[i]);

   printf("\nYour Array a \n");
   for(i=0;i<10;i++)
     printf("\na[%d]=%d",i,a[i]);

   getch();

   max=a[0];
   min=a[0];

   for(i=0;i<10;i++) {
     if(a[i]>max)
       max=a[i];
     else
       if(a[i]<min)
	 min=a[i];
   }

   printf("\nmax=%d \t min=%d",max,min);
   getch();
}