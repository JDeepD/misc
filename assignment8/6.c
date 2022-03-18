#include <stdio.h>

int main(void)
{
	char filename[20], c;
	int count;
	printf("Enter filename: ");
	scanf("%s", filename);
	
	FILE *fptr = fopen(filename, "r");

	while ((c = fgetc(fptr)) != EOF) {
		if (c == '\n') {
			count++;
		}
	}
	printf("Number of lines in %s is %d\n", filename, count);
	fclose(fptr);

	return 0;
}

