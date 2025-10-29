#include <stdio.h>

int main(void) {
	int choice;

	printf("Vending Machine Menu:\n");
	printf("1. Soda - $1.50\n");
	printf("2. Water - $1.00\n");
	printf("3. Chips - $2.00\n");
	printf("4. Candy - $1.25\n");
	printf("Enter your selection (1-4): ");
	scanf("%d", &choice);

	if (choice == 1) {
		printf("You chose, Soda. Cost: $1.50\n");
	}
	else if (choice == 2) {
		printf("You chose, Water. Cost: $1.00\n");
	}
	else if (choice == 3) {
		printf("You chose, Chips. Cost: $2.00\n");
	}
	else if (choice == 4) {
		printf("You chose, Candy. Cost: $1.25\n");
	}
	else {
		printf("Invalid selection.\n");
	}

	return 0;
}

