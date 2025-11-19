#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <time.h>

int sumAll(int count, ...) {
	va_list args;
	va_start(args, count);

	int sum = 0;
	for (int i = 0; i < count; i++) {
		sum += va_arg(args, int);
	}

	va_end(args);
	return sum;
}

int main(void) {
	srand((unsigned int)time(NULL));

	int a1 = rand() % 99 + 1;
	int a2 = rand() % 99 + 1;
	int a3 = rand() % 99 + 1;
	int a4 = rand() % 99 + 1;

	printf("First set (4 numbers): %d, %d, %d, %d\n", a1, a2, a3, a4);
	int sum4 = sumAll(4, a1, a2, a3, a4);
	printf("Sum of first set = %d\n\n", sum4);

	int b1 = rand() % 99 + 1;
	int b2 = rand() % 99 + 1;
	int b3 = rand() % 99 + 1;
	int b4 = rand() % 99 + 1;
	int b5 = rand() % 99 + 1;
	int b6 = rand() % 99 + 1;

	printf("Second set (6 numbers): %d, %d, %d, %d, %d, %d\n", b1, b2, b3, b4, b5, b6);
	int sum6 = sumAll(6, b1, b2, b3, b4, b5, b6);
	printf("Sum of second set = %d\n", sum6);

	return 0;
}
