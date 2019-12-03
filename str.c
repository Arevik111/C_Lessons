#include <stdio.h>
#include <string.h>

int function();

int main()
{
	char str[] = "My name is Arevik";
	char sub[] = "name";
	if(strstr(str, sub) == NULL)
		printf("There is no '%s' word in string '%s'\n", sub, str);
	else
		printf("'%s' is finding in '%s', and address if substring id %p, index is '%d'\n", sub, str, strstr(str, sub), strstr(str, sub)- str);
	 function();
}
 int function()
 {
	 char password[] = "pass";
	 char ps[24];
	 do
	 {
		 printf("Insert password: ");
		 scanf("%s", ps); 
	 }
	 while(strcmp(password, ps) != 0);
		 printf("Correct password!\n");
		 
	return 0;
 }