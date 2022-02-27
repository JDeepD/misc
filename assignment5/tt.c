#include <stdio.h>

void print_sr(int* arr, int start, int end){
	for (int i = start; i <= end; i++) {
		printf("%d ", arr[i]);
	}
}

int main(void)
{
	int arr[8] = {1, 1, 1, 2, 3, 1, 3, 5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int n = 4;

	for (int i = 0; i < size; i++) {
		int sum = arr[i];
		if (sum == n) {
			printf("Found at index: %d\n", i);
		}
		for (int j = i+1; j < size; j++) {
			sum += arr[j];
			if (sum == n) {
				printf("Found from indices: %d to %d: ", i, j);
				print_sr(arr, i, j);
				printf("\n");
			}
		}
	}

	return 0;
}
