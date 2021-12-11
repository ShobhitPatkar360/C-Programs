 #include<stdio.h>
 #include<conio.h>
 #include<string.h>

 void main() {
	char a[10];
	FILE *p;
	clrscr();


	p = fopen("Test.txt","w");

	gets(a);
	fputs(a,p);

	gets(a);
	fputs(a,p);


	fclose(p);
	getch();
	}