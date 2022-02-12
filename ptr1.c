#include <stdio.h>

int main(void)
{
	int x = 10;
	int *ptr = &x;
	printf("Value of x = %d\n", x);
	printf("Value of *ptr = %d\n", *ptr);
	printf("Address of x = %p\n", &x);
	printf("Value of ptr = %p\n", ptr);
	return 0;
}
