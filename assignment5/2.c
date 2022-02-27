#include <stdio.h>

int main(void)
{

	int arr[7] = {1, 2, 3, 1, 3, 5, 5};
	int size = sizeof(arr)/sizeof(arr[0]);

	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			if (arr[i] == arr[j]) {
				printf("%d \n", arr[i]);
			}
		}
	}

	return 0;
}
