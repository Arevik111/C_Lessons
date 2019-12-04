#include <stdio.h>

void print_str()
{
	printf("We are printing function print_str\n");
}


void print_str_arg(char str[])
{
	printf("We are printing function print_str and our argument is %s\n", str);
}


int sum(int num1, int num2)
{
	return num1 + num2;
}