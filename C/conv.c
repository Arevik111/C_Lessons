#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2, num3;
	char s1[20] = "34fgdf", s2[20] = "fgdf", s3[20] = "444", s4[20];
	num1 = atoi(s1);
	num2 = atoi(s2);
	num3 = atoi(s3);
	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	sprintf(s4, "%o", num1);
	printf("%s", s4);
}
 