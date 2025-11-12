#include <stdio.h>

enum ErrorCode { SUCCESS = 0, FILE_NOT_FOUND, PERMISSION_DENIED, UNKNOWN_ERROR };

enum ErrorCode simulateOperation(int choice) {
	switch (choice) {
		case 1: return SUCCESS;
		case 2: return FILE_NOT_FOUND;
		case 3: return PERMISSION_DENIED;
		default: return UNKNOWN_ERROR;
	}
}

int main(void) {
	int choice;
	enum ErrorCode result;

	printf("Simulate operation:\n");
	printf("1. Success\n");
	printf("2. File Not Found\n");
	printf("3. Permission Denied\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	result = simulateOperation(choice);

	switch (result) {
		case SUCCESS:        printf("Operation successful.\n"); break;
		case FILE_NOT_FOUND:       printf("Error: File not found.\n"); break;
		case PERMISSION_DENIED:       printf("Error: Permission denied.\n"); break;
		default:          printf("Error: Unknown error occured.\n"); break;
	}

	return 0;
}
