#include <stdio.h>

void print_sr(int* arr, int start, int end){
	for (int i = start; i <= end; i++) {
		printf("%d ", arr[i]);
	}
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int arr[7] = {1, 2, 3, 4, 5, 6, 7};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	for (int i = 0; i < size/2; i++) {
		swap(&arr[i], &arr[size-i-1]);
	}
	print_sr(arr, 0, size-1);

	return 0;
}
