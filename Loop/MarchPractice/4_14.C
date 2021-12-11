/*Program to calculate the following serie
    1 - 2 + 3 - 4 +....+ n
  Developed By Shobhit Kumar Patakar
  on 07 March 2020
  */

  #include<stdio.h>
  #include<conio.h>

  void main() {
	float sum = 0.0;
	int cnt,no;
	clrscr();

	printf("Enter the value of n for following  \n \
		\t\t 1 + 1/2 + 1/3 +...+ 1/n \n");
	scanf("%d",&no);

	for(cnt = 1; cnt <= no; cnt++)
		sum = sum + (float)1/cnt;


	printf("\nSum = %f",sum);
	getch();

	}