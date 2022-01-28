#include <stdio.h>

long double factorial(int x);

int main(void)
{
	int x;
	printf("Enter a number(Large numbers can cause overflow): ");
	scanf("%d", &x);
	long double fact; //floating 128 bit integer.
	fact = factorial(x);
	printf("%Lf\n", fact);
	return 0;
}

long double factorial(int x)
{
	if (x <= 1)
		return 1;
	else
		return x * factorial(x-1);
}
