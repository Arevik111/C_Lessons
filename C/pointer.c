#include <stdio.h>
#include <string.h>
#define SIZE 10


int main()
{
	int number = 780;
	int *p_number = &number;
	printf("value = %d, address = %p\n", *p_number, p_number);	
	
	int array[] = {3, 6, 8, 78, 70, 98, 999, 3445, 98876, 6};
	int *p_array = array;
	for(int i = 0; i < SIZE; i++){
		fprintf(stdout, "index = %d, value = %d, adress = %p\n", i, *p_array, p_array);
		*p_array++;
	}
	
	char name[] = "arevik";
	char *p_name = name;
	for(int i = 0; i < strlen(name); i++){
		if(*p_name == 'a'){
			*p_name = 'A';
		}
		fprintf(stdout, "%c", *p_name);
		*p_name++;
	}
}