#include <stdio.h>
#define SIZE 5

int main()
{
	int number[5] = {2, 3, 4, 5, 6};
	int *p_num1 = &number[0];
	int *p_num2 = &number[1];
	int *p_num3 = &number[2];
	int *p_num4 = &number[3];
	int *p_num5 = &number[4];
	int *p_numbers[SIZE] = {p_num1, p_num2, p_num3, p_num4, p_num5};
	for(int i = 0; i < SIZE; i++){
		printf("Position = %d, address = %p,  value = %d\n", i, p_numbers[i], *p_numbers[i]);
	}
	char *p_masiv_string[3] = {"I ", "Learn ", "C"};
	for(int i = 0; i < 3; i++) {
		printf("%s", p_masiv_string[i]);
	}
	printf("\n");
}