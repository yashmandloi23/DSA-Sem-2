// WAP to insert the node at last position in doubly linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the last position of the list
void insertAtLast(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    
    if (*head == NULL) { // If the list is empty
        *head = newNode;
    } else {
        struct Node* current = *head;
        
        while (current->next != NULL) {
            current = current->next;
        }
        
        current->next = newNode;
        newNode->prev = current;
    }
}

// Function to display the doubly linked list
void displayList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    
    // Inserting nodes at the last position
    insertAtLast(&head, 1);
    insertAtLast(&head, 2);
    insertAtLast(&head, 3);
    insertAtLast(&head, 4);
    
    // Displaying the doubly linked list
    printf("Doubly linked list: ");
    displayList(head);
    
    return 0;
}
