#include <stdio.h>
#include <string.h>
#define SIZE 50


int main()
{
	char str1[SIZE] = "I learn ";
	char str2[] = "programming";
	strcat(str1, str2);
	printf("%s\n", str1);
	strncat(str1, str2, 5);
	printf("%s\n", str1);
}