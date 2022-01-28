#include <stdio.h>
#include <stdlib.h>

int* foo(int *arr, int len_arr)
{
	int *narr = (int*)malloc(len_arr);
	for (int i = 0; i < len_arr; i++){
		narr[i] = arr[i];
	}

	narr[0] = 2;
	return narr;
}

int main(void)
{
	int a[3] = {1, 2, 3};
	int *b = foo(a, 3);
	printf("%li\n", sizeof(*b));

	puts("Arr a is: ");
	for (int i = 0; i < 3; i++){
		printf("%d ", a[i]);
	}
	puts("\n");

	puts("Arr b is: ");
	for (int i = 0; i < 3; i++){
		printf("%d ", b[i]);
	}
	puts("\n");
}
