/*Program to check whether the given matrix is symmetric or not
  Developed by Shobhit Kumar Patkar
  on 29 Sept 2020
  */

  #include<stdio.h>
  #include<conio.h>

  void main()
  {
    int a[3][3],i,j,count=1,sym=1;
    clrscr();

    printf("Enter 9 integers of array a[3][3] \n");

    //  Following we are going to make reusable loop of i and j
    while(count<4) {

      for(i=0;i<3;i++) {
	for(j=0;j<3;j++) {

	  if(count==1)
	    scanf("%d",&a[i][j]); // Scanning values for matrix

	  if(count==2)
	    printf("\t a[%d][%d]=%d",i,j,a[i][j]);// printing values
						  //  of matrix

	  if(count==3)
	    if((a[i][j])!=(a[j][i])) { //Checking Symmetric or  not
	      sym=0;                   //if not sym contain f
	      break;                   // if not symmetric stop cheching

	    }

	}  // For j loop

	if(count==2) printf("\n"); //  Gives next line after one row finish
	if(sym==0) break; //  exit i loop

      } //  For i loop

      if(sym==0) break;
      count++;
    } //  For while loop

    if(sym==0)
      printf("\nYour matrix is not symmetric");
    else
      printf("\nYour matrix is symmetric");

  getch();
  }