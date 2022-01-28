#include <stdio.h>

int main(void)
{
	int marks;
	printf("Enter marks(0-100) ");
	scanf("%d", &marks);

	if (marks > 100){
		printf("Invalid marks\n");
		return 1;
	}
	else{
		if (marks >= 85){
			printf("Grade is A\n");
		}
		else if (marks >= 75){
			printf("Grade is B\n");
		}
		else if (marks >= 65){
			printf("Grade is C\n");
		}
		else if (marks >= 45){
			printf("Grade is D\n");
		}
		else{
			printf("Grade is F\n");
		}
	}
}
