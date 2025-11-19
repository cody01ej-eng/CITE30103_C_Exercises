#include <stdio.h>

int sumArray(int arr[], int size) {
	if (size == 0)
		return 0;
	return arr[size - 1] + sumArray(arr, size - 1);
}

int main(void) {
	int n;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	int arr[n];

	printf("Enter %d integers: ", n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("Sum of array elements = %d\n", sumArray(arr, n));

	return 0;
}
