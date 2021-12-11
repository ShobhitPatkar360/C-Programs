/*Program to find n raise to power m
  Developed by Shobhit Kumar Patkar
  on 07 March 2020
  */

  #include<stdio.h>
  #include<conio.h>

  void main() {
	int base,pow,num=1,cnt=0;
	clrscr();

	printf("Enter base and power\n");
	scanf("%d%d",&base,&pow);

	while(cnt < pow) {

		printf("\nnum = %d, base = %d",num,cnt);
		num = num * base;
		getch();
		cnt++;
		}
	printf("\nnum = %d, base = %d",num,cnt);
	getch();
	}
