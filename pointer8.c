#include <stdio.h>

struct Student {
	char name[50];
	int age;
};

int main(void) {
	struct Student s1;
	struct Student *ptr = &s1;

	printf("Enter student name: ");
	fgets(ptr->name, sizeof(ptr->name), stdin);

	printf("Enter student age: ");
	scanf("%d", &ptr->age);

	printf("\n--- Student Information ---\n");
	printf("Name: %s", ptr->name);
	printf("Age: %d\n", ptr->age);

	return 0;
}
