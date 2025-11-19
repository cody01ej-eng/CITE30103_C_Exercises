#include <stdio.h>

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	return gcd(y, x % y);
}

int main(void) {
	int x,y;

	printf("Enter two positive integers (x y): ");
	scanf("%d %d", &x, &y);

	if (x <= 0 || y <= 0) {
		printf("Both numbers must be positive.\n");
		return 0;
	}

	printf("gcd(%d, %d) = %d\n", x, y, gcd(x, y));

	return 0;
}
