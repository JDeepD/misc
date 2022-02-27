#include <stdio.h>
#include <string.h>

struct Stc{
	int num;
	char name[10];
	char rno[10];
};


int main(void)
{
	struct Stc c1;
	c1.num = 10;
	strcpy(c1.name, "Test");
	strcpy(c1.rno, "Two");


	printf("%p \n", &c1);
	printf("%p \n", &c1.num);
	printf("%p \n", &c1.name);
	printf("%p \n", &c1.rno);


	char s1[10];
	/* s1 = "Test";  // invalid. Cannot assign to character array directly */ 

	char *s2;
	s2 = "Test"; // valid.

	printf("%lu \n", sizeof(s1)); // prints size of actual char array i.e 10 bytes
	printf("%lu \n", sizeof(s2)); // prints size of char pointer i.e 8 bytes

	printf("%p \n", s2);
	printf("%p \n", &s2[0]);


	return 0;
}
