#include <stdio.h>

int main(void) {
	int i = 67;
	float f = 4.1503f;
	double d = 2.7666782834;
	char c = 'E';

	printf("Int: %d\n", i);
	printf("Float: %f\n", f);
	printf("Double: %lf\n", d);
	printf("Char: %c\n\n", c);

	char chars[] = {'a','b','c','x','y','z','A','B','C','X','Y','Z'};
	int n = sizeof(chars) / sizeof(chars[0]);
	printf("Characters and ASCII values:\n");
	for (int j = 0; j < n; j++) {
		printf("%c = %d\n", chars[j], chars[j]);
	}
	printf("\n");

	float sciF = 9.21e5f;
	double sciD = 5.545e-5;
	printf("Float scientific notation: %e\n", sciF);
	printf("Double scientific notation: %e\n\n", sciD);

	float num = 3.1415926f;
	printf("Float with 1 decimal: %.1f\n", num);
	printf("Float with 2 decimals: %.2f\n", num);
	printf("Float with 4 decimals: %.4f\n", num);
	printf("Float with 6 decimals: %.6f\n\n", num);

	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of float: %lu bytes\n", sizeof(float));
	printf("Size of double: %lu bytes\n", sizeof(double));
	printf("Size of char: %lu byte\n\n", sizeof(char));

	int a = 9, b = 2;
	float result = (float)a / b;
	printf("Division result (float): %.3f\n", result);
	printf("As percentage: %.2f%%\n\n", result * 100);

	int normalInt = 1000;
	double normalDouble = 6.28;
	short int small = -100;
	unsigned int count = 25;
	long int big = 1234567890;
	long long int veryBig = 9223372036854775807LL;
	unsigned long long int huge = 18446744073709551615ULL;
	long double precise = 3.141592653589793238L;

	printf("normalInt (int): %d\n", normalInt);
	printf("normalDouble (double): %lf\n", normalDouble);
	printf("small (short int): %hd\n", small);
	printf("count (unsigned int): %u\n", count);
	printf("big (long int): %ld\n", big);
	printf("veryBig (long long int): %lld\n", veryBig);
	printf("huge (unsigned long long int): %llu\n", huge);
	printf("precise (long double): %.15Lf\n", precise);

	return 0;
}

