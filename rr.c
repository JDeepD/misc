#include <stdio.h>


void fn();

int main(void)
{
	{
		// default auto lifetime(stays in memory till program stays inside this scope) 
		// Only accessible in current scope {}
		int x = 10; 
		x = x + 2;

		// static lifetime(stays in memory till end of program)
		// But only accessible in current scope {}
		// Static variables are generally used when we want to save the state
		// of a variable even when the function call popped from call stack.
		static int y = 11;
		y = y + 4;
	}
	/* x = x + 2; // error */
	/* y = y + 4; // error */
	fn();
	fn();
	fn();
	fn();
	fn();
}

void fn(){
	static int x = 1;
	x++;
	printf("%d ", x);
}
