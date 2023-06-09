// WAP to delete the node in single link list at end position and display it.
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *next;
};

// Function to delete the last node of the list
void deleteLastNode(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is already empty. Cannot delete from an empty list.\n");
        return;
    }

    // If there is only one node in the list
    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
        return;
    }

    // Traverse to the second last node
    struct Node *secondLast = *head;
    while (secondLast->next->next != NULL)
    {
        secondLast = secondLast->next;
    }

    // Delete the last node
    free(secondLast->next);
    secondLast->next = NULL;
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

    // Insert nodes
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node3 = (struct Node *)malloc(sizeof(struct Node));

    node1->data = 1;
    node2->data = 2;
    node3->data = 3;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    head = node1;

    // Display the initial list
    printf("Linked List before deletion: ");
    displayList(head);

    // Delete the last node
    deleteLastNode(&head);

    // Display the updated list
    printf("Linked List after deletion: ");
    displayList(head);

    return 0;
}
