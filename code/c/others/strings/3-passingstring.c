// pass string in a function

#include<stdio.h>
void str_input(char string[])
{
scanf("%s", string);
}
void printstring(char obj[])
{
	printf("%s\n", obj);
}
int main()
{
	char sub[20];
	printf("enter string: ");
	str_input(sub);
	printf("displaying string\n");
	printstring(sub);
return 0;
}

	
