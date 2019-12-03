#include <stdio.h>

typedef struct
{
	char *name;
	char *popn;
} City;

int main()
{
	City yer, van, gy, *ptr;
	yer.name = "Yerevan";
	yer.popn = "1,000,000";
	printf("Name of the city is %s, population is %s\n", yer.name, yer.popn);
	ptr = &van;
	ptr->name = "Vanadzor";
	ptr->popn = "300,000";
	printf("Name of the city is %s, population is %s\n", van.name, van.popn);
	ptr = &gy;
	ptr->name = "Gyumri";
	ptr->popn = "310,000";
	printf("Name of the city is %s, population is %s\n", ptr->name, ptr->popn);
}