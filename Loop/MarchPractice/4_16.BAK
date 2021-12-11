/*Program to calculate the following serie
    1 + x + x^2 x^3 + x^3 + x^4 + ... + x^n
  Developed By Shobhit Kumar Patakar
  on 07 March 2020
  */

  #include<stdio.h>
  #include<conio.h>

  void main() {
	int sum = 0, cnt = 1,no,pow = 1, p_term = 1 , x  ; //perticular tterm
	clrscr();

	printf("Enter the value of x and n for following  \n \
		\t\t 1 + x + x^2 + x^3 + x^4 + x^5 \n");
	scanf("%d %d",&x,&no);

	for( ; pow <= no; pow ++) {

		while(cnt <= pow) {
			p_term = p_term * x;
			cnt++;
			}
		sum = sum + p_term;
		}

	printf("\nSum = %d",sum);
	getch();

	}









