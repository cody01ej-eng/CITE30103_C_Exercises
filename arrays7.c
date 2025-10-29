#include <stdio.h>

int main(void) {
	int n;
	printf("Enter size of square matrices: ");
	scanf("%d", &n);

	int A[n][n], B[n][n], C[n][n];

	printf("Enter elements of first matrix (%d x %d):\n", n, n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &A[i][j]);

	printf("Enter elements of second matrix (%d x %d):\n", n, n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &B[i][j]);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			C[i][j] = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				C[i][j] += A[i][k] * B[k][j];

	printf("Resultant matrix:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%d ", C[i][j]);
		printf("\n");
	}

	return 0;
}
