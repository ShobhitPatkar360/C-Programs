#include<stdio.h>
#include<conio.h>
typedef enum myenum
{
  jan=1,feb,mar,apr,may
  ,jun,jul
}m;

typedef struct mytype
{
  int dd;m mon;int yy;
}md;
void main()
{
 md m1;
 clrscr();
 printf("\nMay=%d",may);
 printf("\nSizeof(m)=%d"
 ,sizeof(m));
 m1.dd=11;
 m1.mon=may;
 m1.yy=2008;
 printf("\nMost Wonderful\
  Day %d/%d/%d"
 ,m1.dd,m1.mon,m1.yy);
 getch();
}
