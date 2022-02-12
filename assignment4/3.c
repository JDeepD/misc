#include <stdio.h>

long double factorial(long long x);

int main(void)
{
	long double x;
	printf("Enter a number: ");
	scanf("%Lf", &x);
	printf("%.0Lf! = %.0Lf\n", x, factorial(x));
	return 0;
}

long double factorial(long long x)
{
	if (x > 1)
		return x * factorial(x - 1);
	else
		return 1;
}
