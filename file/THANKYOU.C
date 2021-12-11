 #include<stdio.h>
 #include<conio.h>
 #include<string.h>

 void main() {
	char a[50];
	FILE *p;
	clrscr();

	p = fopen("Final.txt","r");
	// Testin output commands
	fgets(a,50,p);

	fclose(p);
	puts(a);
	printf("File Read Successfully");
	getch();
	}