#include <stdio.h>
#include <stdlib.h>

typedef struct Information{
	char *name;
	int age;
} info; 

int main(void)
{
	info A;
	A.name = (char *)malloc(sizeof(char) * 10);
	scanf("%s", A.name);
	printf("Done");
	return 0;
}

