#include <stdio.h>

int sumArray(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	return sum;
}

int main(void) {
	int n, i;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	int arr[n];

	printf("Enter %d integers: ", n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("Sum of array elements = %d\n", sumArray(arr, n));

	return 0;
}
