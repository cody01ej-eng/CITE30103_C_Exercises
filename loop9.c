#include <stdio.h>

int main(void) {
	int start, end, i, j, isPrime;

	printf("Enter start of range: ");
	scanf("%d", &start);
	printf("Enter end of range: ");
	scanf("%d", &end);

	printf("Prime numbers between %d and %d:\n", start, end);
	for (i = start; i <= end; i++) {
		if (i < 2) continue;
		isPrime = 1;
		for (j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime)
			printf("%d ", i);
	}

	printf("\n");
	return 0;
}
