// WAP to  implement stack using array with 7 element stack.
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 7

// Stack structure
struct Stack {
    int data[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
bool isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
bool isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack is full. Cannot push element.\n");
        return;
    }
    
    stack->top++;
    stack->data[stack->top] = value;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot pop element.\n");
        return -1; // Return a default value indicating failure
    }
    
    int value = stack->data[stack->top];
    stack->top--;
    return value;
}

// Function to display the elements of the stack
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return;
    }
    
    printf("Stack elements: ");
    for (int i = stack->top; i >= 0; i--) {
        printf("%d ", stack->data[i]);
    }
    printf("\n");
}

// Test the program
int main() {
    struct Stack stack;
    initialize(&stack);
    
    // Push elements onto the stack
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);
    
    // Display the elements of the stack
    display(&stack);
    
    // Pop elements from the stack
    int poppedElement1 = pop(&stack);
    int poppedElement2 = pop(&stack);
    
    // Display the elements of the stack after popping
    display(&stack);
    
    printf("Popped elements: %d, %d\n", poppedElement1, poppedElement2);
    
    return 0;
}
