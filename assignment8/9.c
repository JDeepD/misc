#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	float y;
	char a;
} data;


int main(void)
{
	data *U = (data *)malloc(sizeof(data));

	U->x = 10;
	U->y = 2.1234;
	U->a = 'z';

	printf("X = %d\n", U->x);
	printf("Y = %f\n", U->y);
	printf("a = %c\n\n", U->a);


	data P;

	P.x = 11;
	P.y = 4.1234;
	P.a = 'q';

	printf("X = %d\n", P.x);
	printf("Y = %f\n", P.y);

	printf("a = %c\n", P.a);

	return 0;
}
