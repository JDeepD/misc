#include <stdio.h>

int main(void)
{
	float a, b;
	int choice;
	printf("Enter 2 numbers: ");
	scanf("%f %f", &a, &b);

	printf("0 to add\n1 to subtract\n2 to multiply\n3 to divide\n\nEnter choice: ");
	scanf("%d", &choice);

	switch (choice) {
		case 0: printf("%f\n", a + b); break;
		case 1: printf("%f\n", a - b); break;
		case 2: printf("%f\n", a * b); break;
		case 3: printf("%f\n", a / b); break;
		default: printf("Invalid option\n"); return 1;
	}

}
