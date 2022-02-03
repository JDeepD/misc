/*
Pattern 2:
    *
   **
  ***
 ****
*****
*/


void put_space(int n);

#include <stdio.h>

int main(void)
{
	int n; printf("Enter the number of rows to print: ");
	scanf("%d", &n);

	for ( int rows = 1; rows <= n; rows++) {
		put_space(n-rows);
		for ( int stars = 1; stars <= rows; stars++ ){
			printf("*");
		}
		printf("\n");
	}
}

void put_space(int n){
	for (int i = 0; i < n; i++)
		printf(" ");
}
