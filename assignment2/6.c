#include <stdio.h>

int main(void)
{
	int expr, x, y, z;
	printf("Enter the value of x, y, z: ");
	scanf("%d %d %d", &x, &y, &z);
	printf("Value of x, y, z before expr evaluated: %d %d %d\n", x, y, z);
	expr = x++ + ++x + ++y + y++ + ++z;
	printf("Value of x, y, z after expr evaluated: %d %d %d\n", x, y, z);
	printf("Value of expr: %d\n", expr);
}

