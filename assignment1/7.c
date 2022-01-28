#include <stdio.h>

int main(void)
{
	int i;
	printf("Enter the value of i: ");
	scanf("%d", &i);

	printf("Value of i after post-increment: %d\n", i++);
	printf("Value of i now: %d\n", i );
	printf("Value of i after pre-increment: %d\n", ++i);
	printf("Value of i now: %d\n", i );
}
