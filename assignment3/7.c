#include <stdio.h>

void find_sum(int n);

int main(void)
{
	int n; printf("Enter n: ");	
	scanf("%d", &n);
	if ( n < 27 && n > 1 ){
		find_sum(n);
	}
	else {
		printf("Please enter n between 1 and 27");
		return 1;
	}
}

void find_sum(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++){
			for (int k = 1; k <= n; k++){
				if (i + j + k == n) {
					printf("%2d + %2d + %2d = %2d\n", i, j , k, n);
				}
			}
		}
	}	
}
