/*
1  ***********
2  **       **
3  * *     * *
4  *  *   *  *
5  *   * *   *
6  *   * *   *
7  *  *   *  *
8  * *     * *
9  **       **
10 ***********


Solution: 
1. Take input n, and print n rows
2. For row = 1 and row = 2, we need to print '*'
3. For col = 1 and col = n + 1, we need to print '*'
3. For 1 < row < n:
	if row = col: print '*'
	if row + col = n + 1
 */

#include <stdio.h>


void put_char(int n, char ch);

int main(void)
{
	int n; printf("Enter a number (2n rows will be printed): ");
	scanf("%d", &n);

	for (int row = 1; row <= n; row++ ) {
		for (int col = 1; col <= n; col++){
			if ( row == 1 || row == n    ||
				 col == 1 || col == n    ||
				 row == col              ||
				 row + col == n + 1 ){
				printf("*");
			}
			else {
				printf(" ");
			}
				
			}
		printf("\n");
		}
}
