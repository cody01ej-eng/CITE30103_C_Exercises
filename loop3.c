#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int guess, number;
	srand(time(0));
	number = rand() % 20 + 1;

	do {
		printf("Guess the number between 1 and 20: ");
		scanf("%d", &guess);
		if (guess > number)
			printf("Lower!\n");
		else if (guess < number)
			printf("Higher!\n");
		else
			printf("Correct!\n");
	} while (guess != number);

	return 0;
}
