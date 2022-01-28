/*
Pattern 2:
For n = 5; rows printed = 9
	*
    **
    ***
    ****  
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
	
	for ( int row = 1; row <= 2*n - 1; row++) {
		if (row <= n){
			for (int stars = 1; stars <= row; stars++) {
				printf("*");
			}
			printf("\n");
		}
		else {
			for (int stars = 1; stars <= (2*n) - row ; stars++) {
				printf("*");
			}
			printf("\n");
		}
	}

}
