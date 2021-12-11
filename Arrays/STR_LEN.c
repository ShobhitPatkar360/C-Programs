/*Program to find the length of string
  Developed By Shobhit Kumar Patkar
  on 08 Oct 2020
  */
  #include<stdio.h>
  #include<conio.h>
  
  void main()
  {
	  char a[10];
	  int i;
	  clrscr();
	  
	  printf("Write a Stringl \n");
	  scanf("%s",a);
	  
	  i=0;
	  while( a[i] != '\0') {
		  i++;
	    }
	  printf("\nLength of %s is %d",a,i);
	  getch();
    }
  
	  