/*Program to find the sum of first 10 positive integers
  Developed by Shobhit Kumar Patkar
  on 08 March 2020
  */

  #include<stdio.h>
  #include<conio.h>

  void main() {
	int cnt = 0, sum = 0, num = 10;
	clrscr();

	printf("Press Enter to see sum of first 10 positiveintegers \n");
	getch();

	while(cnt != num) {
		sum = ++cnt + sum;
		}
	printf("Sum of first %d num is %d",cnt , sum);
	getch();

	}













