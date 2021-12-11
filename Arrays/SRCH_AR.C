/*Program to search a number in the given array
  Developed By Shobhit Kumar Patkar
  on 17 Sept 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   int a[10],i,no;
   clrscr();

   printf("Enter 10 integers for array  a \n");
   for(i=0;i<10;i++)
     scanf("%d",&a[i]);

   printf("Enter no to search - \t");
   scanf("%d",&no);

   for(i=0;i<10;i++) {  //  Loop to Search number
     if(a[i]==no)  { //  if if no matches element
       printf("\na[%d]=%d",i,a[i]);
       break;
     }
   }
   getch();
 }