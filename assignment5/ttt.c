#include <stdio.h>



int main(void)
{
	int arr[2][2] = {{1, 2},
					 {3, 4}};

	int (*p)[2];
	int *pint;
	for (int i = 0; i < 2; i++) {
		
		p = &arr[i];
		pint = (int *)p;

	}
}
