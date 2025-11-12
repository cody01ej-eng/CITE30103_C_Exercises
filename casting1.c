#include <stdio.h>

int main(void) {
	int num = 42;
	float result;

	result = num;

	printf("Integer value: %d\n", num);
	printf("Float value (after casting): %.2f\n", result);

	return 0;
}
