#include <stdio.h>

int main(void)
{
	int a = 5;
	a = a++ + a;
	printf("%d\n", a);
}

