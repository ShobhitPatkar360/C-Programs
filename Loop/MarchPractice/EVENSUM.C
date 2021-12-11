/*Program to display the sum of all even no b/w 1 to 100
  Developed by Shobhit Kumar Patkar
  no 07 March 2020
  */

  #include<stdio.h>
  #include<conio.h>

  void main() {
	int cnt = 0, sum = 0;
	clrscr();

	printf("Sum of even no b/w 1 to 100 \n");
	getch();

	while(cnt<=100) {
		sum = sum + cnt;
		printf("\ncnt = %d, sum = %d",cnt,sum);
		cnt+=2;
		if(cnt %5 == 0) getch();
		}
	getch();

	}