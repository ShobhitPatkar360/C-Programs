/*Program to accept a string and print it vertically
  Developed By Shobhit Kumar Patkar
  on 08 Oct 2020
  */

  #include<stdio.h>
  #include<conio.h>

  void main()
  {
    char a[20];
    int i;
    clrscr();

    printf("Enter a String \n");
    scanf("%s",a);

    printf("\nFollowing answer is coming");
    getch();

    i=0;
    while( a[i] != '\0') {
      printf("\n%c",a[i]);
      i++;
    }

    getch();
 }

