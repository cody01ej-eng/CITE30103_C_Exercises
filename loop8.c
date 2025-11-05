#include <stdio.h>
int main(void) {
	int num, sum = 0, digit;

	printf("Enter an integer: ");
	scanf("%d", &num);

	while (num != 0) {
		digit = num % 10;
		sum += digit * digit;
		num /= 10;
	}

	printf("The sum of the squares of the digits is %d\n", sum);
	return 0;
}

