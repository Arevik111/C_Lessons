#include <stdio.h>

int main()
{
	fprintf(stdout, "Select a number and then you will know age of person\n");
	fprintf(stdout, "1, Arevik.\n");
	fprintf(stdout, "2, Anush.\n");
	fprintf(stdout, "3, Elen.\n");
	fprintf(stdout, "4, Aram.\n");
	int number = 0;
	fscanf(stdin, "%d", &number);
	switch(number){
		case 1: fprintf(stdout, "Arevik is 36.\n");
		break;
		case 2: fprintf(stdout, "Anush is 34.\n");
		break;
		case 3: fprintf(stdout, "Elen is 9.\n");
		break;
		case 4: fprintf(stdout, "Aram is 26.\n");
		break;
		default: fprintf(stdout, "There is no names.\n");
		break;
	}
}