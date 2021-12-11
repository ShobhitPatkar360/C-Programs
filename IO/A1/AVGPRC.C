/* Program to calculate average and percentage of user
   defined number
   By Shobhit Kumar Patkar
   email-cs1938@global.org.in
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
 float m,s,e,h,gk,avg,percent;
 clrscr();

 printf("Enter marks for Mathematics \n");
 scanf("%f",&m);

 printf("\nEnter marks for Science \n");
 scanf("%f",&s);

 printf("\nEnter marks for English \n");
 scanf("%f",&e);

 printf("\nEnter marks for Hindi \n");
 scanf("%f",&h);

 printf("\nEnter marks for GK \n");
 scanf("%f",&gk);

 avg=(m+s+e+h+gk)/5.0;
 percent=(m+s+e+h+gk)/500.0*100.0;


 printf("\nAverage = %f \nPercentage = %f",avg,percent);
 getch();

 }