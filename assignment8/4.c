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

	FILE *fptr = fopen(filename, "w");

	if (fptr == NULL) {
		printf("Error assshole\n");
		exit(1);
	}

	printf("\nPress CTRL-D to stop\n\n");
	printf("Start writing: Maximum 100 characters per line:\n");
	while (fgets(buffer, 100,stdin) != NULL) {
		fprintf(fptr, "%s", buffer);
	}

	printf("\nWritten into %s \n", filename);


	fclose(fptr);

	return 0;
}
