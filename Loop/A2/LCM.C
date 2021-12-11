/*Program to find LCM of given numbers
  Developed by Shobhit Kumar Patkar
  on 25 Aug 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
  int i,n1,n2,n3,lcm=1,p;
  clrscr();

  printf("Enter 3 numbers \n");
  scanf("%d%d%d",&n1,&n2,&n3);
  p=n1;
  if(n1>n2) {
    if(n1>n3) p=n1; else p=n3;
  }
  else
    if(n2>n3) p=n2; else p=n3;

  for( i = 2; i <= p; ) {

    if((n1%i==0)||(n2%i==0)||(n3%i==0)) {
      lcm=lcm*i;
      if(n1%i==0) n1=n1/i;
      if(n2%i==0) n2=n2/i;
      if(n3%i==0) n3=n3/i;
    }
    else i=i+1;
  }

  printf("\nFinally LCM is %d",lcm);
  getch();
 }