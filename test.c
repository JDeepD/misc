#include <stdio.h>


void test(void){
	static int x = 5;
}

int main(int argc, char **argv)
{
	static int x = 4;
	test();
}
