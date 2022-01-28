#include <stdio.h>

void swap_by_ref(int *a, int *b);

int main(void)
{
	int x = 3, y = 4;
	printf("x = %d ; y = %d\n", x, y);
	swap_by_ref(&x , &y);
	printf("x = %d ; y = %d\n", x, y);
	
	return 0;
}


void swap_by_ref(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp; 
}
