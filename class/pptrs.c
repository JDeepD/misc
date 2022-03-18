#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	float *p, *table;
	int size;
	printf("What is size of table?\n");
	scanf("%d", &size);
	printf("\n");

	table = (float *)malloc(size*sizeof(float));
	if ( table==NULL ){
		printf("No space\n");
		exit(1);
	}
	printf("Address of first byte is %u\n", table);
	printf("Input table values: \n");
	for (p = table; p < table+size; p++) {
		scanf("%f", p);
	}
	printf("\n\n");
	for (p = table + size - 1 ; p >= table; p--) {
		printf("%f is stored in address %u\n", *p, p);
	}
	return 0;
}

