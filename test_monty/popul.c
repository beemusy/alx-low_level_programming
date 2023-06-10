#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

typedef struct {
    int stack[STACK_SIZE];
    int top;
} Stack;

void initializeStack(Stack *stack) {
    stack->top = -1;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        fprintf(stderr, "Error: can't pop an empty stack\n");
        exit(EXIT_FAILURE);
    }
    return stack->stack[stack->top--];
}

void push(Stack *stack, int value) {
    if (stack->top == STACK_SIZE - 1) {
        fprintf(stderr, "Error: stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->stack[++stack->top] = value;
}

void printStack(Stack *stack) {
    int i;
    for (i = stack->top; i >= 0; i--) {
        printf("%d\n", stack->stack[i]);
    }
}

int main() {
    Stack stack;
    initializeStack(&stack);

    /* Example usage */
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    printStack(&stack);

    pop(&stack);
    printStack(&stack);

    pop(&stack);
    printStack(&stack);

    pop(&stack);
    printStack(&stack);

    return 0;
}

