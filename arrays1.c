#include <stdio.h>

int main(void) {
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter %d integers:\n", n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("Array elements: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	printf("\nReverse order: ");
	for (int i = n - 1; i >= 0; i--)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}
