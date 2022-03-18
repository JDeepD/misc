#include <stdio.h>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	if (arr == &arr) {
		printf("True\n");
	}
	return 0;
}

