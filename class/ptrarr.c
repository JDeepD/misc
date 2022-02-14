#include <stdio.h>

int main(void)
{
	int *p, i = 0, sum = 0;
	int x[5] = {1, 2, 3, 4, 5};
	p = x;

	printf("Element     Value    Address\n");
	while (i < 5) {
		printf(" x[%d]        %d    %u\n", i, *p, p);
		sum += *p;
		i++, p++;
	}
	return 0;
}
