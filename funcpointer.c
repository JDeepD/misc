#include <stdio.h>

int square(int n){return n*n;}
int cube(int n){return n*n*n;}
int quad(int n){return square(n)*square(n);}

typedef int (*fn)(int);

fn FuncArr[] = {square, cube, quad};

int main(void)
{
	int n, choice; printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter choice 1: (square) 2: (cube) 3: (quad) ");
	scanf("%d", &choice);

	printf("%d\n", FuncArr[choice-1](n));
}
