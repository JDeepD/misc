#include <stdio.h>

int main(void)
{

	int arr[8] = {1, 1, 1, 2, 3, 1, 3, 5};
	int size = sizeof(arr)/sizeof(arr[0]);

	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			if (arr[i] == arr[j]) {
				continue;
			}
		printf("First non repeating number: %d\n", arr[j]);
		return 0;
		}
	}

	return 0;
}
