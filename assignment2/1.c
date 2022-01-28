#include <stdio.h>

void swap(int *x, int *y);

int main(void)
{
	int a = 1 , b = 2;
	printf("Before swap : a = %d ; b = %d\n", a, b);
	swap(&a, &b);
	printf("After swap  : a = %d ; b = %d\n", a, b);

}

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
