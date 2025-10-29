#include <stdio.h>

struct Student {
	char name[50];
	int roll_number;
	float marks;
};

int main(void) {
	int n;

	printf("Enter number of students: ");
	scanf("%d", &n);

	struct Student students[n];

	for (int i = 0; i < n; i++) {
		printf("\nEnter details for student %d:\n", i + 1);
		printf("Name: ");
		scanf("%s", students[i].name);
		printf("Roll number: ");
		scanf("%d", &students[i].roll_number);
		printf("Marks: ");
		scanf("%f", &students[i].marks);
	}

	printf("\nStudent Details:\n");
	for (int i = 0; i < n; i++) {
		printf("Name: %s | Roll Number: %d | Marks: %.2f\n", students[i].name, students[i].roll_number, students[i].marks);
	}

	return 0;
}
