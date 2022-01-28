#include <stdio.h>

int main(void)
{
	int a, b;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &a, &b);

	printf("Quotient: %d\n", a/b);
	printf("Remainder: %d\n", a % b);

}
