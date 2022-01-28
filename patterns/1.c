/*
Pattern 1: 
*****
*****
*****
*****
*****
*/


#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter the no. of rows to print: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		printf("*****\n");
	}
}

