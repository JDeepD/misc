#include <stdio.h>

int rec_add(int a, int b);

int main(void)
{
	int a, b;
	printf("Enter 2 positive integers: ");
	scanf("%d %d", &a, &b);
	printf("%d x %d = %d\n", a, b, rec_add(a, b));
	return 0;
}


int rec_add(int a, int b)
{
	if (b > 0)
		return a + rec_add(a, --b);
	else
		return 0;
}
