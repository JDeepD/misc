#include <stdio.h>

void foo(void);

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		foo();
	}
}

void foo(void)
{
	static int x = 1; //static vars dont get destroyed after function call is over.
	printf("The value of x is %d\n", x++);
}
