#include <stdio.h>

int main(void)
{
	int arr[8] = {1, 2, 6, 7, 8, 3, 4, 5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	printf("Max: %d\nMin: %d\n", max, min);

	return 0;
}

