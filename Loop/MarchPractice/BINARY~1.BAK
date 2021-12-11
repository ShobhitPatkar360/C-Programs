/*Program to convert from binry to dicimal
  Developed by Shobhit Kumar Patkar
  no 02 March 2020
  */

  #include<stdio.h>
  #include<conio.h>

  void main() {
	int sum,no,dig,dig2,j,i,n,n2;
	clrscr();

	printf("Enter the binary number \n");
	scanf("%d",&no);
	dig = 0;
	n = no;
	dig2 = 0;
	while(n > 0){
		n = n / 10;
		dig2++;
		}
	printf("\nValue of dig2 is %d",dig2);
	sum = 0;
	for(i = 0; i <= dig2;i++){

		if(no != 0) {
		   //	printf("\nBefore dig and no is %d,%d",dig,no);
			dig = no % 10;
			no = no / 10;
			//printf("\nAfter dig and no is %d,%d",dig,no);
			}
		else break;

	       //	printf("\nValue of dig is %d",dig);
	       n2 = 0;
		for(j = i,n = 1;j >= 0 && dig == 1; j--) {
			static n2 = n;
			n2 = n2 * 2;
			}

		sum = sum + n2;
		printf("\nNew value of sum is %d",sum);
		}

		printf("\nDecimal Form is %d",sum);

	getch();
	}















