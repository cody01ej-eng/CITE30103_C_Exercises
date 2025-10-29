#include <stdio.h>

typedef int Integer;

int main(void) {
	Integer a, b, sum, diff, prod;
	float div;

	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	sum = a + b;
	diff = a - b;
	prod = a * b;
	div = (float)a / b;

	printf("Sum = %d\n", sum);
	printf("Difference = %d\n", diff);
	printf("Product = %d\n", prod);
	printf("Quotient= %.2f\n", div);

	return 0;
}
