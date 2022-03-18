#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fptr1, *fptr2;
	char filename[100], c;
	printf("Enter the filename of file: ");
	scanf("%s", filename);
	
	fptr1 = fopen(filename, "r");
	if (fptr1 == NULL) {
		printf("Wrong file name\n");
		exit(1);
	}

	printf("Enter filename to start writing: ");
	scanf("%s", filename);

	fptr2 = fopen(filename, "w");
	if (fptr2 == NULL) {
		printf("Wrong file name\n");
		exit(1);
	}

	while ((c = fgetc(fptr1)) != EOF) {
		fputc(c, fptr2);
	}

	printf("Contents copied to %s\n", filename);

	fclose(fptr1);
	fclose(fptr2);

	return 0;
}
