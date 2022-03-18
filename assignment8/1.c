#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char filename[100];
	char contents[100];

	printf("Enter a filename: ");
	scanf("%s", filename);

	FILE *fptr = fopen(filename, "r");

	if (fptr == NULL) {
		printf("Error");
		exit(1);
	}

	fscanf(fptr, "%[^\n]s", contents);
	printf("Contents of %s: %s", filename, contents);

	return 0;
}

