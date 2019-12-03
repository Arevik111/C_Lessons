#include <stdio.h>

int main()
{
	int number;
	printf("Please, insert a number: \n");
	scanf("%d", &number);
	if(number > 0)
		printf("Your number is positiv \n");
	else if (number < 0)
		printf("Your number is negativ \n");
	else
		printf("Your number is 0 \n");
}