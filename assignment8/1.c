#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char filename[100], c;

	printf("Enter a filename: ");
	scanf("%s", filename);

	FILE *fptr = fopen(filename, "r");

	if (fptr == NULL) {
		printf("Error");
		exit(1);
	}

	while ((c = fgetc(fptr)) != EOF) {
		fputc(c, stdout);
	}

	fclose(fptr);

	return 0;
}

