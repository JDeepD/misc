#include <stdio.h>

struct invent {
	char name[20];
	int num;
	float price;
};

int main(void)
{
	struct invent product[3], *ptr;
	
	struct invent *p[3];

	printf("Size of struct is: %lu", sizeof(product));

	return 0;
}

