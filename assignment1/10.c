#include <stdio.h>

#define INTEREST_RATE 5 // 5 percent interest rate

int main(void)
{
	float deposit , time_in_years;
	printf("Enter deposit amount: ");
	scanf("%f", &deposit);
	
	printf("Enter duration in years: ");
	scanf("%f", &time_in_years);

	// Total Money = Initial + Initial * (INTEREST_RATE/100)* time
	// Profit = Initial * INTEREST_RATE * time * 0.01
	printf("Simple Interest @5%% per annum: %f\n", deposit * INTEREST_RATE * time_in_years * 0.01);
}
