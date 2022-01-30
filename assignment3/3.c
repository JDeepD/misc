/*
*       *
 *     * 
  *   *  
   * *   
    *    
   * *   
  *   *  
 *     * 
*       *
Solution: 
1. We need to print 2n-1(always odd) rows for some input n.
2. In all rows, except the nth row, 2n-3 total spaces are printed

3. Each row from 1 to n-1 has the following property:
	[k spaces] * [ m spaces ] * [k spaces]
	
	k & m are dependent on the row no. by the following relations:
		k = row - 1
		m = (Total spaces to be printed) - (No. of spaces already printed i.e k on both sides)
		m = (2n - 3) - 2k

4. The nth row is a special row since its the only row with just 1 star and 2n - 2 total spaces.

	[k spaces] * [k spaces]
	where, 
	k = Half of total spaces printed = (2n-2)/2

5. From (n+1)th row to (2n-1)th row, each row has the following property:
	[k spaces] * [m spaces] * [k spaces]

	k & m are dependent on row no. by the following relations:
		k = (2n-1) - row
		m = (Total spaces to be printed) - (No. of spaces already printed i.e k on both sides)
		m = (2n - 3) - 2k
 */

#include <stdio.h>

void put_space(int n);
void print_mid_row(int sidespaces, char character);
void print_normal_row(int sidespaces, char character, int midspaces);

int main(void)
{
	int n; printf("Enter a number (2n - 1 rows will be printed): ");
	scanf("%d", &n);

	for ( int row = 1; row <= (2*n - 1); row++ )
		if ( row == n ){
			print_mid_row(n-1, '*');

		}
		else if( row < n ){
			print_normal_row(row - 1, '*', (2*n - 3) - 2*(row - 1));
		}
		else{
			print_normal_row(2*n - 1 - row, '*', (2*n - 3) - 2*(2*n - 1 - row));
		}

	return 0;
}


// this function prints n spaces
void put_space(int n){
	for (int i = 0; i < n; i++)
		printf(" ");
}

//this function prints rows other than the midrow
void print_normal_row(int sidespaces, char character, int midspaces)
{
	put_space(sidespaces);
	printf("%c", character);
	put_space(midspaces);
	printf("%c", character);
	put_space(sidespaces);
	printf("\n");
}


//self-explanatory
void print_mid_row(int sidespaces, char character)
{
	put_space(sidespaces);
	printf("%c", character);
	put_space(sidespaces);
	printf("\n");
}
