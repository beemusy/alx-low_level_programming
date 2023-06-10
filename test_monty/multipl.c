#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = -1;

void push(int value) {
    if (top >= STACK_SIZE - 1) {
        printf("Error: Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = value;
}

int pop() {
    if (top < 0) {
        printf("Error: Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack[top--];
}

void mul() {
    int a, b, result;
    
    if (top < 1) {
        printf("Error: can't mul, stack too short\n");
        exit(EXIT_FAILURE);
    }
    
    a = pop();
    b = pop();
    result = a * b;
    push(result);
}

int main() {
    push(2);
    push(3);
    mul();
    printf("%d\n", stack[top]);  // Output: 6

    return 0;
}
