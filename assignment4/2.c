#include <stdio.h>

void swap_by_ref(int *a, int *b);

int main(void)
{
	int x = 3, y = 4;
	printf("(In main: Before swapping) x = %d ; y = %d\n", x, y);
	swap_by_ref(&x , &y);
	printf("(In main: After swapping)  x = %d ; y = %d\n", x, y);
	
	return 0;
}


void swap_by_ref(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp; 
}
