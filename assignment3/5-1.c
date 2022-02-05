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
1. Take input n, and print 2n rows
2. For the first and last row, print 2n + 1 '*' directly
3. For any kth row, (k <= n):
	The row is printed in following style:

	* [m spaces] * [x spaces] * [m spaces] *
	
	Here 
	m = k - 2

	x = 2n + 1 - 4 - 2m 
	  = 2n + 1 - 4 - 2k +4
	  = 2n - 2k + 1
	
4. For any kth row ( k > n ):

	The row is printed in following style:

	* [m spaces] * [x spaces] * [m spaces] *
	
	Here
	m = 2*n - k - 1

	x = 2n + 1 - 4 - 2m
	  = 2n - 3 - 2(2n - k - 1)
	  = 2n - 3 - 4n + 2k + 2
	  = 2k - 2n - 1

 */

#include <stdio.h>


void put_char(int n, char ch);

int main(void)
{
	int n; printf("Enter a number (2n rows will be printed): ");
	scanf("%d", &n);

	for ( int row = 1; row <= 2*n; row++ ){
		if (row == 1 || row == 2*n) {
			put_char(2*n + 1, '*');
			printf("\n");
		}

		else if ((row > 1) && (row <= n)) {
			printf("*");
			put_char(row - 2, ' ');
			printf("*");
			put_char( 2*n - 2*row + 1, ' ');
			printf("*");
			put_char(row - 2, ' ');
			printf("*");
			printf("\n");
		}
		else {
			printf("*");
			put_char(2*n - row - 1, ' ');
			printf("*");
			put_char( 2*row - 2*n - 1 , ' ');
			printf("*");
			put_char(2*n - row - 1, ' ');
			printf("*");
			printf("\n");
		}

	}
		

	return 0;
}


// this function prints n chars
void put_char(int n, char ch){
	for (int i = 0; i < n; i++)
		printf("%c", ch);
}
