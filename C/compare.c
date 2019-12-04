#include <stdio.h>

int main()
{
	int num1 = 3, num2 = 4, num3 = 5;
	printf("3 > 4, (yes-1, no-0), value = %d\n", num1 > num2);
	printf("4 > 3, (yes-1, no-0), value = %d\n", num2 > num1);
	num1++;
	printf("4 = 4, (yes-1, no-0), value = %d\n", num2 == num1);
}