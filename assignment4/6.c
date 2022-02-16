#include <stdio.h>
#include <math.h>

int isPrime(int n, int div);

int main(void)
{
	int n; printf("Enter a number: ");
	scanf("%d", &n);
	if (isPrime(n, (int)sqrt(n)))
		printf("%d is Prime\n", n);
	else
		printf("%d is not Prime\n", n);
	return 0;
}

int isPrime(int n, int div)
{
	if (div == 1)
		return 1;
	if (n % div == 0)
		return 0;
	else
		return isPrime(n, div - 1);;
}
