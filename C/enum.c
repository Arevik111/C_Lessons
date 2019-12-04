#include <stdio.h>
#define SIZE 38

int main()
{
	enum DAYS {MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRYDAY, SATURDAY, SANDAY} days;
	printf("Number Of Monday is %d\n", MONDAY);
	printf("Number Of TUESDAY is %d\n", TUESDAY);
	printf("Number Of WEDNESDAY is %d\n", WEDNESDAY);
	printf("Number Of THURSDAY is %d\n", THURSDAY);
	printf("Number Of FRYDAY is %d\n", FRYDAY);
	printf("Number Of SATURDAY is %d\n", SATURDAY);
	printf("Number Of SANDAY is %d\n", SANDAY);
	
	enum DAYS day = MONDAY + WEDNESDAY;
	printf("days is %d\n", day);
	typedef int MyNumber;
	MyNumber number = 111;
	printf("MyNumber is %d\n", number);
	typedef char string;
	string myString[SIZE] = "My name is Arevik"; 
	printf("My created typedef is %s", myString);
}