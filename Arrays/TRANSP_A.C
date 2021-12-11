/*Program to find the transpose of given matrix
  special- code reusability for printing a transposing a to b and printing b
  Developed By Shobhit Kumar Patkar
  on 23 Aug 2020
  */

  #include<stdio.h>
  #include<conio.h>

  void main()
  {
    int a[3][3],b[3][3],i,j,count=0;
    clrscr();

    printf("Enter 9 integers for array a[3][3] \n");

    // Following entering the values of a
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);


    /* We are going to make the values of i and j reusable for
       the following function -
     1.Printing a
     2.Setting transpose of a to b
     3.Printing b
     */

    while(count<3) {

      for(i=0;i<3;i++) {
	for(j=0;j<3;j++) {

	  if(count==0)
	    printf("\ta[%d][%d]=%d",i,j,a[i][j]);
	     //  Above  Printing a

	  if(count==1)
	    b[i][j]=a[j][i];
	    //  Above setting transpose of a to b

	  if(count==2)
	    printf("\tb[%d][%d]=%d",i,j,b[i][j]);

	} // For j loop
	if(count!=1) printf("\n");

      } // for i loop
      count++;
      printf("\n");

    } // for while
    getch();
 }