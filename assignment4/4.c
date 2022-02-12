#include <stdio.h>

long power(int base, long x);

int main(void)
{
	int base, x;
	printf("Enter num and exponent: ");
	scanf("%d%d", &x, &base);
	printf("%d^%d = %ld\n", x, base, power(base, x));
	return 0;
}

long power(int base, long x)
{
	if (base == 1)
		return x;
	else
		return x * power(base - 1, x);
}
