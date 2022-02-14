#include <stdio.h>

struct Student {
	char *name;
	int rno;
};

typedef struct Area{
	char *name;
	int pin;
} area;

int main(void)
{
	struct Student S1;
	S1.name = "Test S";
	S1.rno = 22;

	printf("%s %d\n", S1.name, S1.rno);


	area A1;
	A1.name = "Guwahati";
	A1.pin = 1000000;

	printf("%s %d\n", A1.name, A1.pin);


	area A2, A3, A4;
	area arr[3] = {A1, A2, A3};

	return 0;
}

