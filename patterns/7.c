/*
Pattern 2:
*****
 ****
  ***
   **
    *
*/


void put_char(int n, char ch);

#include <stdio.h>

int main(void)
{
	int n; printf("Enter the number of rows to print: ");
	scanf("%d", &n);

	for ( int rows = 1; rows <= n; rows++) {
		put_char(rows-1, ' ');
		put_char(n-rows+1, '*');
		printf("\n");
	}
}

void put_char(int n, char ch){
	for (int i = 0; i < n; i++)
		printf("%c", ch);
}
