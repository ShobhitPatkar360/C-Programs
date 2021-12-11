/*Program to find the second heighest number in given array
  Developed By Shobhit Kumar Patkar
  on 17 Sept 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   int a[10],h1=0,h2=0,i;
   clrscr();

   printf("Enter 10 integers for array a \n");
   for(i=0;i<10;i++)
     scanf("%d",&a[i]);

   printf("\nYour Array a is follwing");
   for(i=0;i<10;i++)
     printf("\na[%d]=%d",i,a[i]);

   //  Now finding the heighest number

   for(i=0;i<10;i++) { //  Loop to set values for h1
     if(a[i]>h1)       //  finding greatest number
       h1=a[i];
   }

   for(i=0;i<10;i++) {
     if(h1!=a[i]) {  //  Neglacting heighest value i.e. h1
       if(a[i]>h2)   //  finding heighest between available numbers
	 h2=a[i];
     }
   }

   getch();

   printf("\nHeighest = %d \t Second heighest = %d ",h1,h2);

   getch();
}