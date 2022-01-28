#include <stdio.h>

int main(void)
{
	float cel, farh;
	printf("Enter temp in Celcius: ");
	scanf("%f", &cel);

	farh = cel * (9.0/5.0) + 32;
	printf("%f C in fahrenheit is %f F\n", cel, farh);
}

