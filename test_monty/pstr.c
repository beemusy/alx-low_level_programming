#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = -1;

void push(int value) {
    if (top < STACK_SIZE - 1) {
        stack[++top] = value;
    } else {
        printf("Stack overflow!\n");
        exit(1);
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack underflow!\n");
        exit(1);
    }
}

void pstr() {
    char string[STACK_SIZE];
    int index = 0;

    while (top >= 0) {
        int value = pop();
        if (value == 0 || value > 127) {
            break;
        }
        string[index++] = (char)value;
    }

    string[index] = '\0';
    printf("%s\n", string);
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(0);
    push(110);
    push(0);
    push(108);
    push(111);
    push(111);
    push(104);
    push(99);
    push(83);

    pstr();

    return 0;
}
