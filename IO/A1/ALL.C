/* Program to perform addition subtracton multiplicatio and division of two user defined
   numbers of different format specifiers
   By Shobhit Kumar Patkar
   email-cs1938@global.org.in
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
  int a; float b;int c; double d;  double e; float f;  float g; float h;
  clrscr();

  printf("Enter an integer and a float to perform addition \n");
  scanf("%d%f",&a,&b);
  printf("\n%d+%f=%lf (double) \n \n \n \n",a,b,a+b);
  getch();


  printf("Enter an integer and a double to perform subtraction \n");
  scanf("%d%lf",&c,&d);
  printf("\n%d-%lf=%f (float) \n \n \n \n",c,d,c-d);
  getch();


  printf("Enter a double and a float to perform multiplication \n");
  scanf("%lf%f",&e,&f);
  printf("\n%lf*%f=%lf (double) \n \n \n \n",e,f,e*f);
  getch();


  printf("Enter a float and a float to perform division\n");
  scanf("%f%f",&g,&h);
  printf("\n%f/%f=%f (float) ",g,h,g/h);
  getch();

  }







