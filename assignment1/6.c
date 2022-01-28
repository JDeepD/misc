#include <stdio.h>

int main(void)
{
	int i;
	printf("Enter the value of i: ");
	scanf("%d", &i);
	i++;
	printf("Value of i after increment: %d\n", i);

	i--;
	printf("Value of i after decrement: %d\n", i);
}
