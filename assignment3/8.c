#include <stdio.h>

int main(void)
{
	int n; printf("Enter n: ");
	scanf("%d", &n);
	for (int i = 1; i <= 500; i++) {
		if (i % n == 0) {
			printf("%d is divisible by %d\n", i, n);
		}
	}
}

