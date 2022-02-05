#include <stdio.h>
#include <string.h>


int main(void)
{
	char str[50];
	printf("Enter a number: ");
	scanf("%[^\n]", str);
	int count[10];

	for (int i = 0; i < strlen(str); i++){
		count[(int)str[i] - 48]++;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d -> %d times\n", i, count[i]);
	}
}
