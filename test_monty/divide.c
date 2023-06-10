#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = -1;

void push(int value) {
    if (top >= STACK_SIZE - 1) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = value;
}

int pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack[top--];
}

void div_op(int line_number) {
    int divisor, dividend, result;

    if (top < 1) {
        printf("L%d: can't div, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    divisor = pop();
    dividend = stack[top];

    if (divisor == 0) {
        printf("L%d: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    result = dividend / divisor;
    stack[top] = result;
}

int main() {
    push(10);
    push(2);
    div_op(1);
    printf("%d\n", stack[top]);

    push(5);
    push(0);
    div_op(2);

    return 0;
}
