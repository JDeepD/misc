#include <stdio.h>

int main(void)
{
	char filename1[20], filename2[20];
	char c;

	printf("Enter a filename to copy from: ");
	scanf("%s", filename1);	

	printf("Enter a filename to copy to: ");
	scanf("%s", filename2);	

	FILE *fptr1 = fopen(filename1, "r");
	FILE *fptr2 = fopen(filename2, "w");
	
	while ((c = getc(fptr1)) != EOF) {
		putc(c, fptr2);
	}

	printf("\nCopied contents from %s to %s\n", filename1, filename2);

	fclose(fptr1);
	fclose(fptr2);

	return 0;
}

