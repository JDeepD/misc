/*
Pattern 2:

	1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

*/

#include <stdio.h>

int main(void)
{
	int n; printf("Enter the number of rows to print: ");
	scanf("%d", &n);

	for ( int rows = 1; rows <= n; rows++) {
		for (int num = 1; num <= rows; num++){
			printf("%d ", num);
		}
		printf("\n");
	}
}
