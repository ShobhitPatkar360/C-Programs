/*Program to print to print prime numbers up to  100
  developed by Shobhit Patkar
  on 31 Aug 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
  int i,j,k;
  clrscr();

  printf("Press enter to see prime numbers up to 100 \n");
  getch();
  i=2;

  while(i<=100)  { // loop will give i=2,3,4,5,....,100;
   k=0;
   j=2;

   while(j<=i/2)  { // loop for every i, j=2,3,4,5,....i/2;
     if(i%j==0)  {  // loop will stop if if will divisible by j
		  // and this will be reported by value of k
       k=1;
       break;
     }
     j++;
    }
      if(k==0) printf("\n%d is Prime",i);// if loop does not stop then
      i++;                              //  ..this statement will print
      if(i%10==0) getch();             // this will act as a pause button
   }
 getch();
}