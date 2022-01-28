#include <stdio.h>

int lower2upper(char c);
int lower2upper_in_ternary(char c);

int main(void)
{
	char ch;
	puts("Enter a single character");
	scanf("%c", &ch);

	printf("Upper case letter is: %c\n", lower2upper(ch));
}


int lower2upper(char c)
{
	if (c >= 'a' && c <= 'z'){
		int upper = 'A' + c - 'a';
		return upper;
	}
	else {
		return c;
	}
}



int lower2upper_in_ternary(char c)
{
	char upper = (c >= 'a' && c <= 'z') ? ('A' + c - 'a') : (c);
	return upper;
}
