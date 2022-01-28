#include <stdio.h>

int func(int arr[]);

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	printf("%lu\n", sizeof(arr)); //Output ? 

	func(arr);
}

int func(int arr[])
{
	printf("%lu\n", sizeof(arr)); // Output ?
}
