#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Stack
{
	int top;
	unsigned capacity;
	int* array;
}