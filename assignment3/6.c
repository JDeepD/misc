#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[50];
	printf("Enter a number: ");
	scanf("%[^\n]", str);

	for (int i = 0; i < strlen(str); i++){
		switch (str[i]) {
			case '0': printf("zero "); continue;
			case '1': printf("one "); continue;
			case '2': printf("two "); continue;
			case '3': printf("three "); continue;
			case '4': printf("four "); continue;
			case '5': printf("five "); continue;
			case '6': printf("six "); continue;
			case '7': printf("seven "); continue;
			case '8': printf("eight "); continue;
			case '9': printf("nine "); continue;
			default: printf("Invalid character detected\n"); break;
		}
	printf("\n");
	}

}

