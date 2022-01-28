/*
Pattern 2:

	*****
    ****
    ***
    **
    *
*/

#include <stdio.h>

int main(void)
{
	int n; printf("Enter the number of rows to print: ");
	scanf("%d", &n);

	for ( int rows = 1; rows <= n; rows++) {
		for (int stars = 1; stars <= n - rows + 1 ; stars++){
			printf("*");
		}
		printf("\n");
	}
}
