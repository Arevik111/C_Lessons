#include <stdio.h>

void recursia(int number);

int main()
{	
	int number;
	fprintf(stdout, "Insert a number\n");
	fscanf(stdin, "%d", &number);
	recursia(number);
	puts("Recursion is comleted");
}

void recursia(int number)
{
	fprintf(stdout, "%d\n", number);
	--number;
	if(number < 0)
		return;
	else
		recursia(number);	
	
}


