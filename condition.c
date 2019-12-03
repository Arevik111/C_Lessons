#include <stdio.h>

int main()
{
	int a = 5, b = 2, cat = 2;
	( a > b) ? printf("%d > %d\n", a, b) : printf("%d < %d\n", a, b);
	( a % b == 0) ? printf("Number a is even\n", a) : printf("Number a is not even\n", a);
	printf("On the window sits %d %s\n", cat, (cat == 1) ? "cat" : "cats");
}