/*Program to calculate
	1 + x/!1 + x^3/!3 + x^5/!5 +...+ x^n/!n
  Developed by Shobhit Kumar Patkar
  on 08 March 2020
  */

  #include<stdio.h>
  #include<conio.h>
  void no(float p) {
	scanf("%f",&p);
	printf("%f",p);
	}
  void main() {
	float sum = 1, fact = 2,no, base, n;
	int i;
	clrscr();

	printf("Enter the value of base and x \n");
	scanf("%f%f",&base,&n);
	no = base*base;
	for( i = 2; i <= n; i+=2) {
		//printf("\nBefore sum=%f,fact=%f,i=%d",sum,fact,i);
		sum = sum + no/fact;
		fact = fact * (i+1) * (i+2);
		no = no * base * base;
		printf("\nAfter sum=%f,fact=%f,i=%d",sum,fact,i);
		getch();
		}
	printf("\nSum = %f",sum);
	getch();
	}
