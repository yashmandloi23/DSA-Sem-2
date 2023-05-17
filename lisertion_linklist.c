#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void linklisttraversal(struct node *ptr)
{
    while (ptr != NULL)
        printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // link first and second node
    head->data = 7;
    head->next = second;

    // link second and third node
    second->data = 11;
    second->next = third;

    // terminate the link list after third
    third->data = 66;
    third->next = NULL;

    return 0;
}