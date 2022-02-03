/*
Pattern 2:

1         *
2        * *
3       * * *
4      * * * *
5     * * * * *

Input n: print n rows

For kth row, no. of stars = k

*/

void put_char(int n, char ch);

#include <stdio.h>

int main(void)
{
	int n; printf("Enter the number of rows to print: ");
	scanf("%d", &n);

	for ( int rows = 1; rows <= n; rows++) {
		put_char(n-rows, ' ');
		put_char(rows, '*');
		put_char(n-rows, ' ');
		printf("\n");
	}
}

void put_char(int n, char ch){
	for (int i = 0; i < n; i++)
		printf("%c", ch);
}
