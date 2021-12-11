typedef struct mytype
{
a:4;
b:6;     //can't pass bit more than 16 bit
c:5;     // vary according to os
}m;

typedef struct yourtype
{
a:4;
b:6;
c:9;
}y;
typedef struct ourtype
{
a:6;
b:10;
c:9;
}o;
typedef struct vtype
{
a:16;
b:10;
c:9;
}v;
typedef struct vvtype
{
//a:26;
//b:20;
c:2;
}vv;
typedef struct vvvtype
{
a:16;
b:16;
c:16;
d:10;
e:15;
}vvv;
void main()
{
clrscr();
printf("\nsizeof(m)-%d",sizeof(m));
printf("\nsizeof(y)-%d",sizeof(y));
printf("\nsizeof(o)-%d",sizeof(o));
printf("\nsizeof(v)-%d",sizeof(v));
printf("\nsizeof(vv)-%d",sizeof(vv));
printf("\nsizeof(vv)-%d",sizeof(vvv));
getch();
}