#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct drivers{
	char name[20];
	long int lno;
	char route[20];
	int km;
}d1, d2, d3;


int main(void){

	puts("Enter details");

	printf("Name: ");
	fgets(d1.name, 10, stdin);

	printf("Enter something: ");
	scanf("%li", &d1.lno);

	printf("route:");
	fgets(d1.route, 10, stdin);

	printf("%s\n", d1.name);
	printf("%s\n", d1.route);

}
