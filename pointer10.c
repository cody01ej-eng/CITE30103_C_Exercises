#include <stdio.h>

int* larger(int *a, int *b) {
	if (*a > *b)
		return a;
	else
		return b;
}

int main(void) {
	int x, y;

	printf("Enter two integers: ");
	scanf("%d %d", &x, &y);

	int *ptr = larger(&x, &y);

	printf("The larger number is: &d\n", *ptr);

	return 0;
}
