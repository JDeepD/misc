#include <stdio.h>
#include <string.h>


int main(void)
{
	char str[50];
	printf("Enter a number:(max 50 digits): ");
	scanf("%[^\n]", str);
	int count[10] = {0}; // initialise all elems with 0

	for (int i = 0; i < strlen(str); i++){
		if ((int)str[i] > 57) {
			printf("Invalid digit entered");
			return 1;
		}
		count[(int)str[i] - 48]++;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d -> %d times\n", i, count[i]);
	}
}
