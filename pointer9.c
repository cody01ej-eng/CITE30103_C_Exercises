#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int *arr;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	arr = (int *)malloc(n * sizeof(int));
	if (arr == NULL) {
		printf("Memory allocation failed!\n");
		return 1;
	}

	printf("Enter %d integers:\n", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", arr + i);
	}

	int *ptr = arr;
	int largest = *ptr;

	for (int i = 1; i < n; i++) {
		if (*(ptr + i) > largest) {
			largest = *(ptr + i);
		}
	}

	printf("The largest element is: %d\n", largest);

	free(arr);

	return 0;
}
