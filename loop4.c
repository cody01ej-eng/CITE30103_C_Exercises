#include <stdio.h>

int main(void) {
	int n, a = 0, b = 1, sum, count = 2;

	printf("Enter number of terms: ");
	scanf("%d", &n);

	if (n <= 0) return 0;

	printf("%d %d ", a, b);
	while (count < n) {
		sum = a + b;
		printf("%d ", sum);
		a = b;
		b = sum;
		count++;
	}

	printf("\n");
	return 0;
}
