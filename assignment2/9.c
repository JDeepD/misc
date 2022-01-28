#include <stdio.h>

int main(void)
{
	int num;
	printf("Enter number: ");
	scanf("%d", &num);

	/*
	 * !(num % 2) is equivalent to (num % 2 == 0)
	 */
	if ( !(num%2) )
		printf("%d is an even number\n", num);
	else
		printf("%d is an odd number\n", num);
}
