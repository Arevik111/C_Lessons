#include <stdio.h>
#define SIZE 20

void string (char str[]);
int sum(int num1, int num2);
int cube(int x);


int main()
{
	int a = 5, b = 8;
	char new_str[SIZE] = "new string";
	string(new_str);
	fprintf(stdout, "function sum return %d\n", sum(a, b));
	fprintf(stdout, "function cube return %d\n", cube(4));
}

void string (char str[])
{
	fprintf(stdout, "function string return %s\n", str);
} 

int sum(int num1, int num2)
{
	return num2 + num2;
}

int cube(int x)
{
	return x * x * x;
}
