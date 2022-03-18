#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char buffer[100];
	char filename[20];
	char c;

	printf("Enter a filename: ");
	scanf("%s", filename);
	scanf("%c", buffer);

	FILE *fptr = fopen(filename, "w+");
	if (fptr == NULL) {
		printf("Error assshole\n");
		exit(1);
	}

	printf("Press CTRL-D to stop\n");
	while (fgets(buffer, 100,stdin) != NULL) {
		fprintf(fptr, "%s", buffer);
	}

	fseek(fptr, 0, SEEK_SET);

	printf("\nContents of %s: \n\n", filename);
	while (fgets(buffer, 100, fptr) != NULL) {
		printf("%s", buffer);
	}

	fclose(fptr);

	return 0;
}
