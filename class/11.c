#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char name[20] = "The capital of India";
	int length;
	char *cptr = name;
	printf("\n%s\n\n", name);
	printf("%c\n", name[20]);
	while (*cptr != '\0') {
		printf("%c is stored in %u\n", *cptr, cptr);
		cptr++;
	}
	length = cptr - name;
	printf("\nLength is %d\n", length);
	return 0;
}
