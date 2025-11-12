#include <stdio.h>
#include <string.h>

int main(void) {
	char str[200];
	int count[256] = {0};

	printf("Enter a string: ");
	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++) {
		count[(unsigned char)str[i]]++;
	}

	printf("Character occurences:\n");
	for (int i = 0; i < 256; i++) {
		if (count[i] > 0)
			printf("%c: %d\n", i, count[i]);
	}

	return 0;
}
