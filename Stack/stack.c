#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

// stack creation
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// if stack is full
int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// if stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// pushes element into the stack
void push(struct Stack* stack, int item) {
    if (isFull(stack)) 
        printf("Stack Overflow");
    stack->array[++stack->top] = item;
    printf("pushed to stack - %d\n", item);
}

// pops the element from stack
int pop(struct Stack* stack) {
    if (isEmpty(stack))
        printf("Stack Underflow");
    return stack->array[stack->top--];
}

// peeks the top element from stack
int peek(struct Stack* stack) {
    if (isEmpty(stack))
        printf("Stack is Empty");
        return stack->array[stack->top];
}

int main() {
    struct Stack* stack = createStack(10);
    push(stack, 23);
    push(stack, 68);
    push(stack, 12);
    push(stack, 92);

    pop(stack);

    return 0;
}