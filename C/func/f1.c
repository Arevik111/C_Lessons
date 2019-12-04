#include <stdio.h>
#include "f2.h"
#define SIZE 100

int main()
{
	int a = 20, b = 30, c;
	char str[SIZE] = "This is our argument of function print_str_arg";
	print_str();
	print_str_arg(str);
	c = sum(a, b);
	fprintf(stdout, "We are printing function sum with arguments a and b, and the result is %d\n", c);
	
}