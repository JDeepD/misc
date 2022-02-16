#include <stdio.h>

void increment(void);

int main(void)
{
	for (int i = 0; i < 5; i++)
		increment();
	return 0;
}

void increment(void)
{
	static int x = 1;
	printf("   %d\n", x);
	x++;
}
