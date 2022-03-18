#include <stdio.h>

typedef struct {
	char sig[25];
} virus;

int main(void)
{
	virus arr[2] = {
		"Sig1",
		"Sig2"
	};

	printf("%s", arr->sig);
	return 0;
}
