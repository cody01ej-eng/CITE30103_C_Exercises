#include <stdio.h>

int main(void) {
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter %d integers:\n", n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("Unique elements: ");
	for (int i = 0; i < n; i++) {
		int isUnique = 1;
		for (int j = 0; j < n; j++) {
			if (i != j && arr[i] == arr[j]) {
				isUnique = 0;
				break;
			}
		}
		if (isUnique)
			printf("%d ", arr[i]);
	}

	printf("\n");
	return 0;
}
