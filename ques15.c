#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;

int main()
{

    // Here we have created four nodes and allocated the memory for each node
    NODE *head = (struct Node *)malloc(sizeof(struct Node));
    NODE *node1 = (struct Node *)malloc(sizeof(struct Node));
    NODE *node2 = (struct Node *)malloc(sizeof(struct Node));
    NODE *node3 = (struct Node *)malloc(sizeof(struct Node));
    NODE *node4 = (struct Node *)malloc(sizeof(struct Node));
    // initiliation

    head->data = 50;
    head->next = node1;
    node1->data = 100;
    node1->next = node2;
    node2->data = 200;
    node2->next = node3;
    node3->data = 330;
    node3->next = node4;
    node4->data = 450;
    node4->next = NULL;
    // now we are going to display the values
    while (head != NULL)
    {
        printf("Element - %d\n", head->data);
        head = head->next;
    }

    return 0;
}
