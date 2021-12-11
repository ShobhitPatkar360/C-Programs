/*Program to find the greater number in an array
  Developed By Shobhit Kumar Patkar
  on 14 Sept 2020
*/

 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   int a[5],i;
   clrscr();

   printf("Enter 5 int for array \n");

   for(i=0;i<=4;i++)
     scanf("%d",&a[i]);

   printf("\nWe have following array");

   for(i=0;i<=4;i++)
     printf("\na[%d]=%d",i,a[i]);

  getch();
  printf("\nGreater number is ");





  switch(a[0]>a[1]) {
    case 1:
    switch(a[0]>a[2]) {
      case 1:
      switch(a[0]>a[3]) {
	case 1:
	switch(a[0]>a[4]) {
	  case 1: printf("%d",a[0]);
	  case 0: printf("%d",a[4]);
	}
	case 0:
	switch(a[3]>a[4]) {
	  case 1: printf("%d",a[3]);
	  case 0: printf("%d",a[4]);
	}
      }
      case 0:
      switch(a[2]>a[3]) {
	case 1:
	switch(a[2]>a[4]) {
	case 1: printf("%d",a[3]);
	case 0: printf("%d",a[4]);
      }
      case 0:
      switch(a[3]>a[4]) {
	case 1: printf("%d",a[3]);
	case 0: printf("%d",a[4]);
      }
    }
  }
  case 0:
  switch(a[1]>a[2]) {
    case 1:
    switch(a[1]>a[3]) {
      case 1:
      switch(a[1]>a[4]) {
	case 1: printf("%d",a[1]);
	case 0: printf("%d",a[4]);
      }
      case 0:
      switch(a[3]>a[4]) {
	case 1: printf("%d",a[3]);
	case 0: printf("%d",a[4]);
      }
    }
    case 0:
    switch(a[2]>a[3]) {
      case 1:
      switch(a[2]>a[4]) {
	case 1: printf("%d",a[2]);
	case 0: printf("%d",a[4]);
      }
      case 0:
      switch(a[3]>a[4]) {
	case 1: printf("%d",a[3]);
	case 0: printf("%d",a[4]);
      }
    }
  }
}
getch();
 }