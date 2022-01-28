#include <stdio.h>
#include <string.h>


int main()
{
	printf("Enter a character: ");
	char str[100];
	char ch;

	scanf("%s", str);

	if (strlen(str) > 1) {
		printf("Enter one character only\n");
		return 1;
	}
	else{
		switch (ch = str[0]) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': printf("Vowel\n"); break;
			default : printf("Consonant\n"); break;
		}
	}

	return 0;
}
