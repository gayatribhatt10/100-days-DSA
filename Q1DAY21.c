#include <stdio.h>
#include <stdlib.h>

// Define structure for node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

int main() {
    int n;

    // Read number of nodes
    scanf("%d", &n);

    if (n <= 0) {
        return 0;
    }

    struct Node *head = NULL, *temp = NULL, *current = NULL;

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);

        temp = createNode(value);

        if (head == NULL) {
            head = temp;        // First node
        } else {
            current->next = temp;  // Link previous node
        }

        current = temp;
    }

    // Traverse and print the linked list
    current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    return 0;
}