 #include<stdio.h>
 #include<conio.h>
 #include<string.h>

 void main() {
	char a[12];
	FILE *p;
	clrscr();

	p = fopen("Test.txt","r");

	fgets(a,18,p);
	puts(a);
	fclose(p);
	getch();
	}