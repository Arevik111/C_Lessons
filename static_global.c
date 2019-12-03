#include <stdio.h>
 
static int number = 500;
int main()
{
	extern int number;
	extern int number2;
	printf("global static variable number is %d\n", number);
	printf("global variable number is %d\n", number2);
}