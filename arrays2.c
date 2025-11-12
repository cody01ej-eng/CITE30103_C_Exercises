#include <stdio.h>

int main(void) {
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);

	int src[n], dest[n];

	printf("Enter %d elements for source array:\n", n);
	for (int i = 0; i < n; i++)
		scanf("%d", &src[i]);

	for (int i = 0; i < n; i++)
		dest[i] = src[i];

	printf("Copied array: ");
	for (int i = 0; i < n; i++)
		printf("%d ", dest[i]);

	printf("\n");
	return 0;
}
