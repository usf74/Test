#include <stdio.h>
void swap(int x, int y);
void main()
{
	int x, y;
	printf("Enter number 1\n");
	scanf("%d", &x); fflush(stdin);
	printf("Enter number 2\n");
	scanf("%d", &y); fflush(stdin);
	swap(x, y);
	return;
}
void swap(int x, int y)
{
	printf("Numbers before swapping\n x=%d y=%d\n", x, y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("Numbers after swapping\n x=%d y=%d\n", x, y);
	return;
}