/*Program to feel the differsnce between getch(), getche(), getchar()
  Developed by Shobhit Kumar Patkar
  on 08 Oct 2020
  */

  #include<stdio.h>
  #include<conio.h>

  void main()
  {
    clrscr();

    printf("\nFollowing getch()");  //push forward without showing letter
    getch();

    printf("\nFollowing getce()");//push forward with showing letter
    getche();

    printf("\nFollowing getchar()");// show all typed words but push forward
    getchar();                       // only by enter

    printf("\nFinished");
    getch(); // Our practice
  }