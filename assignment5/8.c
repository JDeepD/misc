#include <stdio.h>

int main(void)
{
	int row, col;
	printf("Enter dimensions of matrix: ");
	scanf("%d %d", &row, &col);
	int arr[row][col];
	int tarr[col][row];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			tarr[j][i] = arr[i][j];
		}
	}
	printf("\n");
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			printf("%d ", tarr[i][j]);
		}
		printf("\n");
	}


}
