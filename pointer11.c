#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void insertAtBeginning(struct Node **head, int value) {
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode->data = value;
	newNode->next = *head;
	*head = newNode;
}

void deleteNode(struct Node **head, int value) {
	struct Node *temp = *head;
	struct Node *prev = NULL;

	if (temp != NULL && temp->data == value) {
		*head = temp->next;
		free(temp);
		return;
	}

	while (temp != NULL && temp->data != value) {
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return;

	prev->next = temp->next;
	free(temp);
}

void printList(struct Node *head) {
	struct Node *ptr = head;
	printf("List elements: ");
	while (ptr != NULL) {
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

int main(void) {
	struct Node *head = NULL;

	insertAtBeginning(&head, 10);
	insertAtBeginning(&head, 20);
	insertAtBeginning(&head, 30);

	printf("After inserting 30, 20, 10:\n");
	printList(head);

	printf("Deleting value 20...\n");
	deleteNode(&head, 20);
	printList(head);

	return 0;
}
