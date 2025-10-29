#include <stdio.h>

int main(void) {
	int num, sum = 0;

	printf("Enter positive integers (0 or negative to stop): ");
	scanf("%d", &num);

	while (num > 0) {
		sum += num;
		scanf("%d", &num);
	}

	printf("Sum is: %d\n", sum);
	return 0;
}
