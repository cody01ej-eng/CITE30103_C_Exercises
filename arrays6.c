#include <stdio.h>

int main(void) {
	int n, pos;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	int arr[100];
	printf("Enter %d integers:\n", n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("Enter position to delete (1 to %d): ", n);
	scanf("%d", &pos);

	if (pos < 1 || pos > n) {
		printf("Invalid position.\n");
		return 0;
	}

	for (int i = pos - 1; i < n - 1; i++)
		arr[i] = arr[i + 1];
	n--;

	printf("Array after deletion: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
