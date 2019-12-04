#include <stdio.h>

void print_name();
int sum();
char symbol();

int main()
{
	print_name();
	int number = sum();
	//fprintf(stdout, "Function Sum return %d\n", sum());
	fprintf(stdout, "Function Sum return %d\n", number);
	symbol();
}

 void print_name()
 {
	 fprintf(stdout, "Hello, Arevik\n");
 }
 int sum()
 {
	 int a = 10, b = 20, sum = 0;
	 sum = a + b;
	 return sum;
 }
 
 char symbol()
 {
	 int a = 10, b = 20;
	 fprintf(stdout, "return %d", a + b);
 }