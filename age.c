#include <stdio.h>

int main(void) {
	int age;

	printf("Enter your age: ");
	scanf("%d", &age);

	if (age < 0) {
		printf("Invalid age entered.\n");
	}
	else if (age <= 12) {
		printf("You're a child.\n");
	}
	else if (age <= 19) {
		printf("You're a teenager.\n");
	}
	else if (age <= 64) {
		printf("You're an adult.\n");
	}
	else {
		printf("You're a senior citizen.\n");
	}

	return 0;
}
