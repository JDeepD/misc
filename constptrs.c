#include <stdio.h>

int main(void)
{
	const int x = 10;
	int *ptr = (int *)&x;
	++(*ptr);
	printf("%d\n", x);
	return 0;
}

