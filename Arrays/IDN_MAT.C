/*Program to check entered two matrix are identical or not
  Developed by Shobhit Kukmar Patkar
  on 30 Sept 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
  int a[3][3],b[3][3],count=1,same=1,i,j;
  clrscr();

  printf("Enter 9 integers for array a[3][3] \n");

  while(count<6) {       // Loop of i &  j reusability
    for(i=0;i<3;i++) {
      for(j=0;j<3;j++) {

	if(count==1)              // scanning values for array a
	  scanf("%d",&a[i][j]);

	if(count==2)               // scanning values for array b
	  scanf("%d",&b[i][j]);

	if(count==3)                  // printing values of array a
	  printf("\ta[%d][%d]=%d",i,j,a[i][j]);

	if(count==4)                    // printing values of array b
	  printf("\tb[%d][%d]=%d",i,j,b[i][j]);

	if(count==5)
				   // checking whether arrays are identical
	  if(a[i][j]!=b[i][j]) {    // of not
	    same=0;
	    break; //  Exit j loop
	  }
	}	// For j loop

	if(count==3||count==4) // while printing arrays print \n for next..
	  printf("\n");        // ..row

	if((count==5)&&(a[i][j]!=b[i][j]))
	  break;
      } 	// For i loop


      switch(count) {    // printing text before changing value of count
	case 1: printf("\nEnter 9 int for array b[3][3] \n"); break;
	case 2: printf("\nShowing the values of array a \n"); break;
	case 3: printf("\nShowing the values of array b \n"); break;
	case 4: printf("\nChecking values........\n"); break;
      }	// for Switch
    getch();
    count++;

    }  		// for While

    if(same==1)
      printf("\nGiven two arrays are idnetical ");
    else
      printf("\nGiven two arrays are not identical");

  getch();
 }

















