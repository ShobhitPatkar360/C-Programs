/*Program to add two 2d arrays both [3][3] and set result in third array
  Developed by Shobhit Kumar Patkar
  on 23 Aug 2020
  */

  #include<stdio.h>
  #include<conio.h>

  void main()
  {
    int a[3][3],b[3][3],c[3][3],i,j,cnt=0;
    clrscr();

    printf("Enter the elements for array a[3][3] & b[3][3] \
	    sumultaniously \n");

    // Following entering values a and b simultaniously
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
	scanf("%d%d",&a[i][j],&b[i][j]); //  Later check only a&b for address

    //following showing values of array a & b (code reusability)
    while(1) {

      for(i=0;i<3;i++) { //  Set i
	for(j=0;j<3;j++) { // Set j

	  if(cnt==0) printf("\t a[%d][%d]=%d",i,j,a[i][j]);

	  if(cnt==1)  printf("\t b[%d][%d]=%d",i,j,b[i][j]);

	  if(cnt==2) break;

	}
	if(cnt==2) break;
	printf("\n");
      }
      if(cnt==2) break;
      cnt++;
      printf("\n");
    }
    printf("\n");

    //  Following adding two arrays
    for(i=0;i<3;i++) {
      for(j=0;j<3;j++) {
	c[i][j]=a[i][j]+b[i][j];
	printf("\t c[%d][%d]=%d",i,j,c[i][j]);
      }
      printf("\n");
    }
    getch();
}
/* HYPOTHESIS
  1.My nested loop was not exiting by brek statement
  solution- use break statement for each of the loop individually

  */