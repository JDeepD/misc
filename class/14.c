#include <stdio.h>

#define row 8
#define col 8

void print_sp(int n, int a[row][col]){
	int value =1, i = 0, j = 0, k, m;
	m = n;
	while ( n > 0) {
		a[i][j++] = value++;
		for (k = 1; k <= n - 1; k++) {
			a[i][j++] = value++;
		}
		i++, j--;

		for (k = 1; k <= n - 1; k++) {
			a[i++][j] = value++;
		}
		i--, j--;

		for (k = 1; k <= n - 1; k++) {
			a[i][j--] = value++;
		}
		i--, j++;

		for (k = 1; k <= n - 2; k++) {
			a[i--][j] = value++;
		}
		i++, j++, n = n - 2;
	}
}

int main(void)
{
	int arr[row][col];
	print_sp(row, arr);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%5d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
