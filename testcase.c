#include <stdio.h>

int main(void)
{
	int x = 2, y;
	int *ptr = &x;
	y = *ptr;
	*ptr = 25;
	printf("\nNow, x = %d\n", x);
	printf("Value of x is %d", x);
	printf("x    = %d is stored at address %p\n", x, &x);
	printf("x    = %d is stored at address %p\n", *&x, &x);
	printf("*ptr = %d is stored at address %p\n", *ptr, ptr);
	printf("y    = %d is stored at address %p\n", y, &y);

}
