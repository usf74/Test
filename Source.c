#include "Header.h"
#include <stdlib.h>
void main()
{
	printf("enter number of name chars\n");
	int x=0;
	scanf("%d", &x);
	fflush(stdin);
	printf("enter name\n");
	char* ptr = (char*) calloc(x, sizeof(char));
	gets(ptr); fflush(stdin);
	printf("name is: %s", ptr);
	free(ptr);
	return;
}





