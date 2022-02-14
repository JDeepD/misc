#include <stdio.h>

extern int G_VAR1;
extern char G_VAR2;
extern float G_VAR3;
extern int G_VAR4[3];


int main(void)
{
	printf("extern: G_VAR1 = %d\n", G_VAR1);
	printf("extern: G_VAR2 = %c\n", G_VAR2);
	printf("extern: G_VAR3 = %f\n", G_VAR3);
	printf("extern: G_VAR4[2] = %d\n", G_VAR4[2]);
	return 0;
}
