#include <stdio.h>

int main(void)
{
	int year ;
	printf("Enter year: ");
	scanf("%d", &year);
	/*
	 * year%4 == 0 && !(year%100 == 0)
	 * This condition evaluates false whenever a year is divisible by 100
	 * If the year is divisible by 4 and not 100, it evaluates to true

	 * year%400 == 0
	 * If the first condition evaluates to False, check if the year is divisible by 400
	 * If it is, then its a leap year.
	 *
	 * If the first condition evaluates True(only possible when the year is divisible by 4
	 * and not divisible by 100) , then this condition is not evaluated since first OR
	 * condition is already true by then.
	 */
	if ( (year%4 == 0 && !(year%100 == 0)) || year%400 == 0)
		printf("%d is a leap year\n", year);
	else
		printf("%d is not a leap year\n", year);
}
