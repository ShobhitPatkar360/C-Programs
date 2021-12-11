/*Program to find the LCM and HCF of given Number
  Developed by Shobhit Kukmar Patkar
  on 30 Aug 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
  long no1,no2,rem=1,hcf,lcm,grt,sml;
  clrscr();

  printf("Enter 2 numbers \n");
  scanf("%ld%ld",&no1,&no2);

  if(no1>no2)  {
    grt=no1;
    sml=no2;
  }

  else  {
    grt=no2;
    sml=no1;
  }

  while(rem!=0)  {
    rem=grt%sml;
    grt=sml;
    sml=rem;
  }

  hcf=grt;
  lcm=(no1*no2)/hcf;

  printf("\nHCF = %ld",hcf);
  printf("\nLCM = %ld",lcm);

  getch();
}