/* h Program to compare two strings by calling other function
  Developed By Shobhit Kumar Patkar
  on 08 Oct 2020
  */

  #include<stdio.h>
  #include<conio.h>

  //int getLength( char []);

  int getLength(char str[]) {
    int i;
    for(i=0;str[i]!='\0';i++) {}
    return i;
   }

  void main()
  { int i=0 , same = 0;
    char a[20],b[20];
    clrscr();

    printf("Write first String \n");
    scanf("%s",a);

    printf("Write Second String \n");
    scanf("%s",b);

    if( getLength(a) == getLength(b)) {


      for(same=1; a[i] != '\0'; i++)
	if( a[i] != b[i] ) {

	  same = 0;
	  break;
	 }
     }

    if(same) printf("\nTwo Strings are same");
    else printf("\nTwo Strings are different");

    getch();

  }

/* HYPOTHESIS
  1.Declaration of function is not important

  */