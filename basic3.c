#include <stdio.h>

void swap(int *a, int *b);
void sort(int* arr, int size);
int inarr(int sizeofarr, int *array, int num);

int main(void)
{
	int arr1[] = {1, 8, 2, 5 ,9};
	// 1 2 5 8 9
	int arr2[] = {4, 9, 0, 2, 51};
	sort(arr1, 5);

	
	for (int i = 0; i < sizeof(arr1); i++){
		if (inarr(sizeof(arr2), arr2, arr1[i])) {
			printf("%d\n", arr1[i]);
			return 0;
		}
	}
}

// Bubble sort the array.
void sort(int* arr, int size)
{
	for (int i = 0; i < size; i++){
		for (int j = 0; j < i; j++){
			if (arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
		}
	}
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//this function returns true if num exists in arr. Else false
int inarr(int sizeofarr, int *array, int num)
{
	for (int i = 0; i < sizeofarr; i++){
		if (array[i] == num)
			return 1;
	}
	return 0;
}
