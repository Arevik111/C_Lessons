#include <stdio.h>
#define SUM(a, b) (a + b) * 2
#define P 4

int main()
{
	int a, b, c, d;
	a = 10;
	b = 15;
	c = (a + b) * 2;
	d = SUM (a, b);
	printf("a = %d,  b = %d\n", a, b);
	printf("c = %d,  d = %d\n", a, b);
	#if P == 10
		printf("Initialize IF \n");
	#elif P == 15
		printf("Initialize ELIF \n");	
	#else
		printf("Initialize ELSE \n");	
	#endif
	getchar();
	#undef P
	#define P 55
	printf("Now P = %d\n", P);
}