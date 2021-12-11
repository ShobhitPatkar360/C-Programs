 #include<stdio.h>
 #include<conio.h>
 #include<string.h>

 typedef struct Bike {         // Creatin a structure of Bike
	char company[20];
	char model[20];
	char cost[10];
	char color[10];
	} b;

 b bike[6];                        // Making our instance of structure Globally
 int no = 0;                      // This no will be used as index no to managing arrays

 void show() {                     // This function will retrive the data from file and print it
	int i = 0;                // i will be act as counter to reuse code several time  during extraction and storing in object
	FILE *p;
	p = fopen("Bikes.pagal","rb");
	printf("Following are the details of bikes displayed form file \n");

	while(i != 6) {
		fread(&bike[0],sizeof(b),1,p);// Everytime we are using 1st element of array and rewriting it several times
		printf("\n%s\n%s\n%s\n%s\n",bike[0].company,bike[0].model,bike[0].cost,bike[0].color);
		i++;
		getch();
		}
	fread(&i,sizeof(i),1,p);   // What we get when pen reaches at last
	printf("This much \nAt Last we get : %d",i); // We get noting "i" Stores its previous value
	fclose(p);
	getch();
	}

 void save() {
	int i = 0;
	FILE *p;
	p = fopen("Bikes.pagal","wb");

	if(p==NULL) {     // If our file is unable to be opened then p will contain the null
		printf("Can not open file \n"); // This is for abrupt closing of program
		getch();
		exit(1);
		}
	while ( i!=no) {
		fwrite(&bike[i],sizeof(b),1,p); // we are writing data in our file in binary mode
		i++;
		}
	fclose(p); // Very mendatory to close the file after doing operation on it
	printf("Data Saved Successfully \n");
	}

 int rsp() {      // This is extra function just only to get the responser from user whether he is willing
			    // ..to enter more data or not
	char r;
	printf("Do you wanted to enter data (y/n): \n");
	scanf(" %c",&r);

	if(r=='y')
		return 1;
	return 0;
	}

 void entry() {
	if(no==6) { // Since we crated an array of only 6 element and we will won't add more data
	printf("You have already entered 6 items\n\n");
	return;
	}
	printf("\nEnter the details of Bike %d \n",no+1);
	gets(bike[no].company); // I don't know why first time gets() do not works
	gets(bike[no].company);  // .. execution just passes from here withiout woring
	gets(bike[no].model);
	gets(bike[no].cost);
	gets(bike[no].color);
	no++;   // It is important otherwis infinite loop will come
	}

 void main() {
	int cnt = 0;
	clrscr();
	while(1) { // Infinte loop stops only with if condition along with break statement
		if(rsp()) {
			entry();
			}
		else {
			while(cnt != 6) {

				printf("%s\n%s\n%s\n%s\n\n",bike[cnt].company , \
				bike[cnt].model , bike[cnt].cost , bike[cnt].color );
				cnt++;
				getch();
				}
			save();
			show();
			break;
			}
		}
	printf("You seen the data");
	getch();
	}
/* I  LEARNT FROM THIS PROGRAM
   1.We can creat small functions to do small things to make our work easy
   2.I had done error during scaning vaue therefore scanf functio was not working.
   3.I don't know that why does scanf function does not executes once in start.
     thus I made double command and it stared working fine.
   4.Managin files is relly very easy, it needs that we know correct syntax.
   */