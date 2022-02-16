#include <stdio.h>

#define ACCURACY 10000

double prod(double a, double b)
{
	if (b == 0)
		return 0;
	else
		return a + prod(a, --b);
}

int main(void)
{
	double a, b;
	printf("Enter 2 nums: ");
	scanf("%lf %lf",  &a, &b);
	a *= ACCURACY;
	b *= ACCURACY;
	printf("Prod = %lf", prod(a, b)/(ACCURACY*ACCURACY));
}
