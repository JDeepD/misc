#include <stdio.h>

int main(void)
{
	int i;
	for (i = 0; i < 5; i ++) {
		i = 10;
		continue;
	}
	printf("%d\n", i);
}
