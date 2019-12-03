#include <stdio.h>

typedef struct
{
	char *str;
} PtrType;

PtrType ptr = {"GOOD"};

int main()
{
	printf("Strokovi ukazatel %s\n", ptr.str);
	ptr.str = "idea";
	printf("Strokovi ukazatel %s\n", ptr.str);
}