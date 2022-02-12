// Print Hello Word
#include <stdio.h>

int add(int a, int b);

int main(void)
{
	printf("%d + %d = %d", 2, 3, add(2, 3));
	return 0;
}


int add(int a, int b)
{
	return a + b;
}
