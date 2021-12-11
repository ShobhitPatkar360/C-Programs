/*Program to find HCF of given numbers
  Developed by Shobhit Kumar Patkar
  on 25 Aug 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
  int n1,n2,i,hcf=1;
  clrscr();

  printf("Enter 2 numbers \n");
  scanf("%d%d",&n1,&n2);
  printf("\nHCF of %d %d is",n1,n2);

  for(i=2; (i <= n1)&&(i <= n2); )  {

    if((n1%i==0)&&(n2%i==0)) {
      n1=n1/i;
      n2=n2/i;
      hcf=hcf*i;
    }

    if((n1%i!=0)||(n2%i!=0))
      i++;


    printf("\nNow value of hcf= %d \t i=%d",hcf,i);
    }

    printf("\nFinally HCF=%d",hcf);
    getch();














 }