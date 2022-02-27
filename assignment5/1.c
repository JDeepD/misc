#include <stdio.h>

int main(void)
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int size = sizeof(arr)/sizeof(arr[0]);
	int tmp = arr[size - 1];
	for (int i = size - 1; i >= 1; i--) {
		arr[i] = arr[i-1];
	}
	arr[0] = tmp;

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}

