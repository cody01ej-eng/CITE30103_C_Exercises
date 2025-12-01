#include <stdio.h>

int main(void) {
	int a, b;
	int *pA = &a;
	int *pB = &b;

	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	int sum = *pA + *pB;

	printf("Using variables: a = %d, b = %d\n", a, b);
	printf("Using pointers: *pA = %d, *pB = %d\n", *pA, *pB);
	printf("Sum = %d\n", sum);

	return 0;
}
