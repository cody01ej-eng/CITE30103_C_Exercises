#include <stdio.h>

int main(void) {
	double number = 123.987;
	int truncated;

	truncated = (int)number;

	printf("Double value: %.3f\n", number);
	printf("Integer value after casting: %d\n", truncated);
	printf("Note: The fractional part is truncated, not rounded.\n");

	return 0;
}
