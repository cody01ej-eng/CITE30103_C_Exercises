#include <stdio.h>

int length(char *s) {
	char *ptr = s;

	while (*ptr != '\0') {
		ptr++;
	}

	return ptr - s;
}

int main(void) {
	char str[100];

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == '\n') {
			str[i] = '\0';
			break;
		}
		i++;
	}

	printf("Length of the string = %d\n", length(str));

	return 0;
}
