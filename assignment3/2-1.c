#include <stdio.h>
#include <math.h>
int isPrime(int n);
int main(void)
{
	int n; printf("Enter n: ");
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		if (isPrime(i)) {
			printf("%d is Prime\n", i);
		}
	}
}
// returns 1 if n is prime. Else 0
int isPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}
