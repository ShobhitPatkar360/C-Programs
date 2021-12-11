/*Program to find the max and min no  b/w given 10 nos
  Developed By Shobhit Kumar Patkar
  on 07 March 2020
  */

  #include<stdio.h>
  #include<conio.h>

  void main() {
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,max,min;
	clrscr();

	printf("Enter 10 nos\n");
	scanf("%d%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);

	max = n1;
	min = n1;

	if(max < n2) max = n2;
	if(min > n2) min = n2;

	if(max < n3) max = n3;
	if(min > n3) min = n3;

	if(max < n4) max = n4;
	if(min > n4) min = n4;

	if(max < n5) max = n5;
	if(min > n5) min = n5;

	if(max < n6) max = n6;
	if(min > n6) min = n6;

	if(max < n7) max = n7;
	if(min > n7) min = n7;

	if(max < n8) max = n8;
	if(min > n8) min = n8;

	if(max < n9) max = n9;
	if(min > n9) min = n9;

	if(max < n10) max = n10;
	if(min > n10) min = n10;

	printf("max is %d, min in %d",max,min);
	getch();

	}

