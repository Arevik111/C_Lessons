#include <stdio.h>

int main()
{
	int yes = 1, no = 0;
	printf("Logic yes && yes = %d\n", yes && yes);
	printf("Logic no && yes = %d\n", no && yes);
	printf("Logic no && no = %d\n", no && no);
	printf("Logic no || yes = %d\n", no || yes);
	printf("Logic yes || yes = %d\n", yes || yes);
	printf("Logic no || no = %d\n", no || no);
	printf("Logic !yes = %d\n", !yes);
	printf("Logic !no = %d\n", !no);
}