#include <stdio.h>

#define PI 3.14

int main(void)
{
	float radius;
	printf("Enter radius: ");
	scanf("%f", &radius);

	printf("Area is %f\n", PI*radius*radius);
}
