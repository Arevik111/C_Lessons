#include <stdio.h>
#define SIZE 20

int main()
{
	char massiv[SIZE];
	printf("Insert a text: ");
	//fscanf(stdin, "%[^\n]", massiv);
	//fprintf(stdout, "%s", massiv);
	fgets(massiv, SIZE - 1, stdin);
	fputs(massiv, stdout);
	char simbol = 'A';
	for(; simbol < 'z'; simbol++)
		fprintf(stdout, "%c", simbol);
	printf("\n");
	char simbol_litle = 'd';
	simbol_litle -= 32;
	
	fprintf(stdout, "%c", simbol_litle);
}