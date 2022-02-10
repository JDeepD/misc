#include <stdio.h>
#include <string.h>



int main(){
	char s1[] = "abcde";
	char *s2 = "abcde";

	printf("%lu\n%lu", sizeof(s1), sizeof(s2));
}
