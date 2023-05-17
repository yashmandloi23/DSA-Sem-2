#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *next;
};
typedef struct Node node;
void traversel(struct Node *ptr);
void add_node(node **head_ref, int value);
int main()
{
    node *head = NULL;
    add_node(&head, 56);
    add_node(&head, 566);
    add_node(&head, 42);
    add_node(&head, 21);
    add_node(&head, 220);
    add_node(&head, 00324);
    add_node(&head, 421);
    add_node(&head, 12);
    add_node(&head, 41);
    add_node(&head, 54);
    add_node(&head, 120);

    printf("link list : \n");
    while (head != NULL)
    {
        printf(" %d---->", head->value);
        head = head->next;
    }
    printf("NULL");
    return 0;
}
node *create_node(int value)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}

void add_node(node **head_ref, int value)
{
    node *new_node = create_node(value);
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
    }
    else
    {
        node *current_node = *head_ref;
        while (current_node->next != NULL)
        {
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }
}

void traversel(struct Node *ptr)
{
    printf("link list : \n");
    while (ptr != NULL)
    {
        printf(" %d---->", ptr->value);
        ptr = ptr->next;
    }
    return;
}
