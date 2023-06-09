// WAP to peform queue operation using menu driven logic.
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

// Structure to represent a queue
typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} Queue;

// Function to create an empty queue
Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

// Function to check if the queue is empty
int isEmpty(Queue* queue) {
    if (queue->rear == -1)
        return 1;
    else
        return 0;
}

// Function to check if the queue is full
int isFull(Queue* queue) {
    if (queue->rear == MAX_SIZE - 1)
        return 1;
    else
        return 0;
}

// Function to add an element to the queue
void enqueue(Queue* queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot enqueue element.\n");
    } else {
        if (queue->front == -1)
            queue->front = 0;
        queue->rear++;
        queue->items[queue->rear] = value;
        printf("Element enqueued successfully.\n");
    }
}

// Function to remove an element from the queue
void dequeue(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue element.\n");
    } else {
        printf("Dequeued element: %d\n", queue->items[queue->front]);
        queue->front++;
        if (queue->front > queue->rear) {
            queue->front = -1;
            queue->rear = -1;
        }
    }
}

// Function to display the queue
void display(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = queue->front; i <= queue->rear; i++) {
            printf("%d ", queue->items[i]);
        }
        printf("\n");
    }
}

int main() {
    Queue* queue = createQueue();
    int choice, element;

    do {
        printf("\nQueue Operations\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &element);
                enqueue(queue, element);
                break;
            case 2:
                dequeue(queue);
                break;
            case 3:
                display(queue);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}