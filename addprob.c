#include <stdio.h>
#include <math.h>

int main(void)
{
	long double sum = 0;
	int x, n;
	printf("Enter input x for F(x): ");
	scanf("%d", &x);
	printf("Enter the number of terms(n): ");
	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		int sign = pow(-1, i - 1);
		int x_exp = pow(x, 4*i - 4);
		int dn = (4*i - 6) * (4*i - 5);

		sum += (float)(sign*x_exp)/dn;
	}
	printf("Value of F(%d) for %d terms is: %Lf\n", x, n, 1 + sum);
	return 0;
}
