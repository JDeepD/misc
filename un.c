#include <stdio.h>

typedef union un{
	unsigned int x: 3;
	float y;
	char z;
} unn;

int main(void)
{
	unn a;
	unn b;
	a.x = 7;
	a.y = 23.123;
	a.z = 'q';
	printf("%c\n", a.z);
	return 0;
}

