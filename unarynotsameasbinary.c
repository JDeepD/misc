#include <stdio.h>

int main(void)
{
	int x = 10;
	int *px = &x;

	int y = ++(*px); // y = 11
	printf("%d\n", y); // But it also sets x to 11.
	printf("%d\n", x); // *px = x = 11


	int z = *px + 1;
	printf("%d\n", z);
	printf("%d\n", x);


	return 0;
}

