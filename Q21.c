#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *next;
};

// Function to insert a node at the end of the list
void insertAtEnd(struct Node **head, int newData)
{
    // Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;

    // If the list is empty, make the new node as the head
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    // Traverse to the last node
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Make the last node point to the new node
    temp->next = newNode;
}

// Function to display the linked list
void displayList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Test the program
int main()
{
    struct Node *head = NULL; // Initialize an empty list

    // Insert nodes at the end
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);

    // Display the updated list
    printf("Linked List after insertion: ");
    displayList(head);

    return 0;
}