#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char filename[20];

	printf("Enter a filename: ");
	scanf("%s", filename);

	FILE *fptr = fopen(filename, "r");
	if (fptr == NULL) {
		printf("Error\n");
		exit(1);
	}
	fseek(fptr, 0, SEEK_END);
	printf("Size of %s is %ld bytes\n", filename ,ftell(fptr));
	fclose(fptr);

	return 0;
}
