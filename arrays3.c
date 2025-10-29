#include <stdio.h>

int main(void) {
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);

	int arr[n], even[n], odd[n];
	int e = 0, o = 0;

	printf("Enter %d integers:\n", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 0)
			even[e++] = arr[i];
		else
			odd[o++] = arr[i];
	}

	printf("Even numbers: ");
	for (int i = 0; i < e; i++)
		printf("%d ", even [i]);

	printf("\nOdd numbers: ");
	for (int i = 0; i < o; i++)
		printf("%d ", odd[i]);

	printf("\n");
	return 0;
}

