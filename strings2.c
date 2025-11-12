#include <stdio.h>

int mystrlen(char str[]) {
	int length = 0;
	while (str[length] != '\0')
		length++;
	return length;
}

int main(void) {
	char str[100];
	printf("Enter a string: ");
	scanf("%s", str);

	printf("Length of string: %d\n", mystrlen(str));
	return 0;
}
