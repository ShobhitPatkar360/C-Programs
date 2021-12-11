/*Program to find the multiple of array
  Special- loop of i and j is reusable
  Developed by Shobhit Kumar Patkar
  on 20 Sept 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
  int a[3][3],b[3][3],c[3][3],i,j,s,count=1,k;
  clrscr();

  printf("Enter values if array a \n");

  while(count<=6) {
    for(i=0;i<3;i++) {
      for(j=0;j<3;j++) {

	if(count==1) { //  Entering values in a
	  scanf("%d",&a[i][j]);
	}

	if(count==2) {  //  Entering values in b
	  scanf("%d",&b[i][j]);
	}

	if(count==3) {  //  Printing a
	  printf("\ta[%d][%d]=%d",i,j,a[i][j]);
	}

	if(count==4) {  //  Printing b
	  printf("\tb[%d][%d]=%d",i,j,b[i][j]);
	}

	if(count==5) {  //  Calculating multiple

	  s=0;
	  for(k=0;k<3;k++) {
	    s=s+(a[i][k])*(b[k][j]);  //  (India Ki) (Kashmir Jaan) hay
	  }
	  c[i][j]=s;
	}

	if(count==6) { //  Printing multiple
	  printf("\tc[%d][%d]=%d",i,j,c[i][j]);
	}
      } //  For j loop
      if( count==3 || count==4 || count==6 ) {
	printf("\n");
      }
    }  //  For i loop

    switch(count) {  //  case is 1 less than situation
		     //  beacuse it is going to be print Before start of
		     //  perticular operation of its consern
      case 1: printf("\nEntet values for array b\n"); break;
      case 2: printf("\nPrinting values of array a \n"); break;
      case 3: printf("\nPrinting vaues of array b \n"); break;
      case 4: printf("\nCalculating multiple........ \n"); break;
      case 5: printf("\nPrinting the multiple \n"); break;
    }
    getch();
    count++;
  } //  For while loop
  printf("\nThank You");
  getch();
}