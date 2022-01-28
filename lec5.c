#include <stdio.h>

int main(void)
{
	int a = 10;
	unsigned int b = 4;
	printf("Val a: %d\n", a);
	printf("Val ~b: %d\n", ~b);
	printf("Val -~b: %d\n", -~b);

	printf("%d\n", a-~b-1);
}
