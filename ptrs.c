#include <stdio.h>

int main(void)
{
	int arr[3] = {1, 2, 3};

	int *px = arr;
	int *px1 = arr+2;

	printf("%u\n", px);
	printf("%u\n\n", px1);
	
	int p = px1 - px;

	printf("%d\n", p);


	return 0;
}

