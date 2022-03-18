#include <stdio.h>
#include <stdlib.h>

int exists(char ch, char *arr, int size)
{
	for (int i = 0; i < size; i++){
		if (ch == arr[i])
			return 1;
	}
	return 0;
}


int main(void)
{
	char str[] = "ATTACK";
	/* length of str. -1 to exclude the \0 character */
	int len = sizeof(str)/sizeof(str[0]) - 1;
	
	char printed[len];

	for (int i = 0; i < len; i++) {
		if (!exists(str[i], printed, len)) {
		}
	}


	return 0;
}
