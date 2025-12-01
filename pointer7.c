#include <stdio.h>

void copy(char *dest, char *src) {
	while (*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

int main(void) {
	char source[100];
	char destination[100];

	printf("Enter a string to copy: ");
	fgets(source, sizeof(source), stdin);

	int i = 0;
	while (source[i] != '\0') {
		if (source[i] == '\n') {
			source[i] = '\0';
			break;
		}
		i++;
	}

	copy(destination, source);

	printf("Original string: %s\n", source);
	printf("Copied string:     %s\n", destination);

	return 0;
}
