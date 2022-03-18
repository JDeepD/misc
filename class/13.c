#include <stdio.h>

int main(void)
{
	int i;
	printf("%d\n", 10); // 10 -> /dev/stdout file
	fprintf(stdout, "%d\n", 10); // essentially same but we are manually providing the std output stream

	scanf("%d", &i);
	printf("%d\n", i); // i -> /dev/stdout file

	fscanf(stdin, "%d", &i); // essentially same but we are manually providing the std input stream
	fprintf(stdout, "%d\n", i);
	
	return 0;
}
