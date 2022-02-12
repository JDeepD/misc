#include <stdio.h>

void local_fn(int a, int b);

int main(void)
{
	int a = 1, b = 2;
	printf("Inside main(before calling local_fn):\na = %d\nb = %d\n", a, b);
	local_fn(a, b);
	printf("Inside main(after calling local_fn):\na = %d\nb = %d\n", a, b);
	return 0;
}

void local_fn(int a, int b)
{
	int temp = b;
	b = a;
	a = temp;
	printf("Inside local_fn:\na = %d\nb = %d\n", a, b);
}
