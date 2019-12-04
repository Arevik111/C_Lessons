#include <stdio.h>

typedef struct
{
	int x;
	int y;
}Point;

typedef struct
{
	Point a;
	Point b;
}Box;

Point top = {10, 12};
Point bottom;
Box rect = {20, 21, 22, 23};

int main()
{
	bottom.x = 11;
	bottom.y = 13;
	fprintf(stdout, "Point a.x = %d\n", top.x);
	fprintf(stdout, "Point a.y = %d\n", top.y);
	fprintf(stdout, "Point b.x = %d\n", bottom.x);
	fprintf(stdout, "Point b.y = %d\n", bottom.y);
	printf("\n");
	fprintf(stdout, "Box a.x = %d\n", rect.a.x);
	fprintf(stdout, "Box a.y = %d\n", rect.a.y);
	fprintf(stdout, "Box b.x = %d\n", rect.b.x);
	fprintf(stdout, "Box b.y = %d\n", rect.b.y);
}