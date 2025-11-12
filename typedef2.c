#include <stdio.h>

typedef struct {
	float x;
	float y;
	float z;
} Vector;

Vector addVectors(Vector v1, Vector v2) {
	Vector result;
	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
	result.z = v1.z + v2.z;
	return result;
}

int main(void) {
	Vector v1, v2, sum;

	printf("Enter coordinates of vector 1 (x y z): ");
	scanf("%f %f %f", &v1.x, &v1.y, &v1.z);

	printf("Enter coordinates of vector 2 (x y z): ");
	scanf("%f %f %f", &v2.x, &v2.y, &v2.z);

	sum = addVectors(v1, v2);

	printf("Sum of vectors: (%.2f, %.2f, %.2f)\n", sum.x, sum.y, sum.z);

	return 0;
}

