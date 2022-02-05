/*
1 *       *
2  *     * 
3   *   *  
4    * *   
5     *    
6    * *   
7   *   *  
8  *     * 
9 *       *
Solution: 
1. Take input n and print 2n-1 rows
2.From observation, for each (i,j)th element in the n x n matrix:
	print '*' iff i = j ('*' can be thought as 1 and spaces as '0')
	Therefore the pattern resembles the identity matrix if we consider
	just one diagonal.

	print '*' iff i + j = totalrow + 1 (or i + j = 2n)

	For all other cases, print ' '
*/

#include <stdio.h>
int main(void) {
	int n; printf("Enter n: ");
	scanf("%d", &n);
	for (int i = 1; i <= 2*n-1; i++) {
		for (int j = 1; j <= 2*n - 1; j++) {
			if ( i == j || (i + j == 2*n) ) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
