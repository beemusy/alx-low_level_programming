struct Stack {
    int top;
    int stack[100];
};

int pop(Stack* stack) {
    if (stack->top == 0) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }

    return stack->stack[--stack->top];
}

void add(Stack* stack) {
    if (stack->top < 2) {
        printf("L<line_number>: can't add, stack too short\n");
        exit(EXIT_FAILURE);
    }

    int a = pop(stack);
    int b = pop(stack);
    int result = a + b;

    push(stack, result);
}

int main(int argc, char* argv[]) {
    Stack stack;
    stack.top = 0;

    // Push some elements onto the stack.
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    // Add the elements on the stack.
    add(&stack);

    // Print the result.
    printf("%d\n", pop(&stack));

    return 0;
}
