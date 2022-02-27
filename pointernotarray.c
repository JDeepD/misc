#include <stdio.h>

int main(void)
{
	char str1[3] = "AB";
	char *str2 = "AB";

	printf("Str2 stores the location: %p\n", str2);
	printf("Location of first element of str2: %p\n", &str2[0]);
	printf("Address of str2 pointer: %p\n", &str2);
	printf("\n\n");
	printf("Str1 stores the location: %p\n", str1);
	printf("Location of first element of str1: %p\n", &str1[0]);
	printf("Address of str2 pointer: %p\n", &str1);
}
