#include <stdio.h>

int func(int x, int y);

int main(void)
{
	int (*fnptr)(int, int);
	fnptr = &func;

	int ans = fnptr(2, 3);
	printf("%d\n", ans);

	return 0;
}


int func(int x, int y)
{
	return x*y;
}
