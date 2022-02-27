#include <stdio.h>

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort(int *arr, int size){
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

int print_sr(int* arr, int start, int end){
	for (int i = start; i < end; i++) {
		printf("%d ", arr[i]);
	}
	return 1;
}

int main(void)
{
	int arr[7] = {1, 5, 6, 7 , 2, 3, 4};
	int size = sizeof(arr)/sizeof(arr[0]);
	int k = 0;

	print_sr(arr, 0, size) && printf("\nChoose K for finding Kth maxmin for the arr: ");
	scanf("%d", &k);
	sort(arr, size);
	print_sr(arr, 0, size);
	printf("\n%dth max: %d\n%dth min: %d", k, arr[size - k], k, arr[k-1]);

	return 0;
}
