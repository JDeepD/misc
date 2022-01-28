#include <stdio.h>

int main(void)
{
	int  x, y, z, max;
	printf("Enter 3 numbers x, y, z: ");
	scanf("%d %d %d", &x, &y, &z);

	if ( x >= y && x >= z )
		max = x;
	else if ( y >= x && y >= z )
		max = y;
	else if (z >= x && z >= y)
		max = z;

	printf("Max of %d %d %d is %d\n", x, y, z, max);
}


