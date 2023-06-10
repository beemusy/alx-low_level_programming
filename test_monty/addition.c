#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int top;
    int stack[100];
};

void push(struct Stack* stack, int value) {
    if (stack->top == STACK_SIZE - 1) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->stack[++stack->top] = value;
}

int pop(struct Stack* stack) {
    if (stack->top == -1) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->stack[stack->top--];
}

void add_opcode(struct Stack* stack, int line_number) {
    if (stack->top < 2) {
        printf("L%d: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    int operand2 = pop(stack);
    int operand1 = pop(stack);

    int result = operand1 + operand2;

    push(stack, result);
}

int main() {
    struct Stack stack;
    stack.top = -1;

    push(&stack, 2);
    push(&stack, 3);

    add_opcode(&stack, 1);

    printf("%d\n", stack.stack[stack.top]);

    return 0;
}
