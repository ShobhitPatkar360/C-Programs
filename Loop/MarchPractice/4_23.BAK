/*Program to check whether the given no is prime or not
  Developed by Shobhit Kumar Patkar
  on 08 March 2020
  */

  #include<stdio.h>
  #include<conio.h>

  void main() {
	int num,prime = 1,i;
	clrscr();

	printf("Enter no to check prime \n");
	scanf("%d",&num);

	for(i=2; i <= num/2; i++) {
		if(num %i == 0) {
			prime = 0;
			break;
			}
		}
	if(prime) printf("\n%d is Prime",num);
	else printf("%d is not prime",num);

	getch();
	}