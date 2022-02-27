#include <stdio.h>

float largest(float a[], int n);

int main(void)
{
	float arr[5] = {1, 2.34, -54, 33.3, 33.3};
	printf("The largest number is : %f\n", largest(arr, sizeof(arr)/sizeof(arr[0]) ));
	return 0;
}


float largest(float a[], int n)
{
	int i;
	float max = a[0];
	for (i = 1; i < n; i++) {
		if (max < a[i])
			max = a[i];
	}

	return max;
}
