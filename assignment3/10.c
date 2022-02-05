#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int tries = 10;
	srand(time(NULL));
	int random_num = rand() % 101; // always returns something between 0 and 100(inclusive)
	/* printf("%d\n", random_num); */

	printf("I choose a number between 1-100. You job is to guess it\n\n");
	do {
		int chosen;
		printf("\nTake a guess: (%d tries left): ", tries);
		scanf("%d", &chosen);

		if (chosen == random_num) {
			printf("You guessed the correct number: %d\n", random_num);
			return 0;
		}
		else {
			if (chosen > random_num) {
				printf("Your guess is higher than the number\n");
				continue;
			}
			else {
				printf("Your guess is lower than the number\n");
				continue;
			}
		}
		
	}while (--tries);

	printf("\n\nYOU LOST. The correct number was %d\n", random_num);
}

