/*Program to change the case of alphabat
  Developed By Shobhit Kumar Patkar
  on 30 Sept 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void  main()
 {
   char let;     // if you want ascii value then declare char & read char
   clrscr();     // you should enter a character only not integer

   printf("Enter a character \n");
   scanf("%c",&let);

   if(let>=65 && let<=90)  // if the case is lower
     let=let+32;
   else
     let=let-32;

   printf("\n%c",let);

   getch();
}