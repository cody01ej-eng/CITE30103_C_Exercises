#include <stdio.h>

int main(void) {
	int i = 42;
	char c = 'A';
	double d = 3.14;

	int *pi = &i;
	char *pc = &c;
	double *pd = &d;

	printf("=== Without using pointers ===\n");
	printf("int value: %d, address: %p\n", i, (void*)&i);
	printf("char value: %c, address: %p\n", c, (void*)&c);
	printf("double value: %.2f, address: %p\n", d, (void*)&d);

	printf("\n=== Using pointers ===\n");
	printf("int pointer: value = %d, address = %p\n", *pi, (void*)pi);
	printf("char pointer: value = %c, address = %p\n", *pc, (void*)pc);
	printf("double pointer: value = %.2f, address = %p\n", *pd, (void*)pd);

	return 0;
}

