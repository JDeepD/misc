#include <stdio.h>

long double power(int base, long x);

int main(void)
{
	int base, x;
	printf("Enter num and exponent: ");
	scanf("%d%d", &x, &base);
	printf("%d^%d = %.2Lf\n", x, base, power(base, x));
	printf("%lu", sizeof(long double));
	return 0;
}

long double power(int base, long x)
{
	if (base == 1)
		return x;
	else
		return x * power(base - 1, x);
}
