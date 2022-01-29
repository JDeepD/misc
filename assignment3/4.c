/*
1               (1)
123             (2)
12345           (3)
1234567         (4)
123456789       (5)
1234567         (6)
12345           (7)
123             (8)
1               (9)

Solution: 
1. We need to print 2n-1(always odd) rows for some input n.

From 1st row to nth row:
	1. In any (k)th row, numbers are printed till 2k-1

From (n+1)th row to (2n-1)th row:
	1. In any (k)th row, we have to print numbers 
	   till whatever its mirror(wrt n: middle term) printed
	   For ex, row 6 will print same numbers as its mirror, row 4.
	   Therefore, we just have to find the row no. of the mirror and
	   can use the (1 to n)th row formula to print the numbers.
	
	2. For any row k (k > n), there exists its mirror k' such that
		k + k' = 2n (its not 2n-1 since row nos are starting from 1 and not 0)
		
		There, row no. of mirror of k is just (2n - k)
		Plug this row no. into the (1 to n)th row formula to print (2*(2n - k) - 1) nums
 */


#include <stdio.h>

void print_num(int n);

int main(void)
{
	int n; printf("Enter a number (2n - 1 rows will be printed): ");
	scanf("%d", &n);

	for (int row = 1; row <= 2*n-1; row++){
		if (row <= n){
			print_num(2*row - 1);			
		}
		else {
			print_num(2*(2*n - row) - 1);
		}
	}

}

//this function prints num till n(including) and a newline
void print_num(int n)
{
	for (int i = 1; i <= n; i++){
		printf("%d", i);
	}
	printf("\n");
}
