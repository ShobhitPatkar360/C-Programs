/*Program to print pascal's triangle
  Developed by shobhit kumar patkar
  on 31 Aug 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 { int p,i,n,t,num;
   clrscr();

   printf("\nEnter the number\n");
   scanf("%d",&num);



   for(p=1;p<=num;p=p+2){ //this loop will give the value of (*) p= 1,3,...,7;
     n=p;             // this will keep the value of p safely
     t=(num-p)/2;       // this will generate value for (space)

     while(t!=0){     // loop to print space on left;
       printf(" ");
       t--;
     }

     t=(num-p)/2;

     while(p!=0){     // loop to print * at centre
       printf("*");
       p--;
     }

     while(t!=0){   //  loop to print space on right
       printf(" ");
       t--;
     }
   p=n;             // setting previous value of p so to balance external loop
     printf("\n");
     getch();
   }





      for(p=n;p>0;p=p-2){ //this loop will give the value of (*) p= 9,8,....2,1;
     n=p;             // this will keep the value of p safely
     t=(num-p)/2;       // this will generate value for (space)

     while(t!=0){     // loop to print space on left;
       printf(" ");
       t--;
     }

     t=(num-p)/2;

     while(p!=0){     // loop to print * at centre
       printf("*");
       p--;
     }

     while(t!=0){   //  loop to print space on right
       printf(" ");
       t--;
     }
     p=n;             // setting previous value of p so to balance external loop
     printf("\n");
     getch();
   }
}