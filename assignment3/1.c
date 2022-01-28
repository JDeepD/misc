#include <stdio.h>
#include <string.h>

int main(void)
{
	char string1[50];
	printf("Enter a number: ");
	scanf("%[^\n]c\n", string1);

	int len = strlen(string1);
	for ( int i = 0; i < len/2; ++i ){
		if ( string1[i] != string1[len - i - 1] ){
			printf("Not a palindrome\n");
			return 0;
		}
	}
	printf("Its a palindrome\n");
	return 0;
}
