#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int *a;
	char *s;
} play;

int main(void)
{
	// Allocate 10 characters worth of memory
	char *name = (char *)malloc(10 * sizeof(char));
	scanf("%s", name);
	printf("%s", name);
	
	return 0;
}

