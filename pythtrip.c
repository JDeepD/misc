#include <stdio.h>

int main(void)
{
	int a, b;
	printf("Enter a and b: ");
	scanf("%d%d", &a, &b);
	if (b == 0){
		return 100;
	}
	if (a < b){
		return 200;	
	}

	if (a > 2000) {
		return 21;
	}
	printf("a/b = %d", a/b);
	return 0;
}
