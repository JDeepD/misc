#include <stdio.h>

int main(void)
{
	int start = 1;
	for (int i = 1; i <= 5; i++){
		printf("%d ", i+start);
		start++;
	}
}

