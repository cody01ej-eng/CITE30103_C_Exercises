#include <stdio.h>

union Data {
	int i;
	float f;
	char c;
};

int main(void) {
	union Data data;

	printf("Size of union: %lu bytes\n\n", sizeof(data));

	data.i = 42;
	printf("After assigning int:\n");
	printf("data.i = %d\n", data.i);
	printf("data.f = %f\n", data.f);
	printf("data.c = %c\n\n", data.c);

	data.f = 3.14f;
	printf("After assigning float:\n");
	printf("data.i = %d\n", data.i);
	printf("data.f = %f\n", data.f);
	printf("data.c = %c\n\n", data.c);

	data.c = 'A';
	printf("After assigning char:\n");
	printf("data.i = %d\n", data.i);
	printf("data.f = %f\n", data.f);
	printf("data.c = %c\n", data.c);

	return 0;
}

