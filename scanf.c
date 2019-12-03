#include <stdio.h>

int main()
{
	int age, weight;
	char name[50];
	printf("What is your name? ");
	scanf("%s", name);
	printf("How old are you? ");
	scanf("%d", &age);
	printf("How is your weight? ");
	scanf("%d", &weight);
	printf("Your name is %s, you are %d and your weight is %d\n", name, age, weight);
	printf("Address of your name is 0x%p\n", &name);
	printf("Address of your age is 0x%p\n", &age);
	printf("Address of your weight is 0x%p\n", &weight);
}