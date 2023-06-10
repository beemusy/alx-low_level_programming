#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = -1;

void push(int value) {
    if (top >= STACK_SIZE - 1) {
        printf("Stack overflow!\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow!\n");
        exit(EXIT_FAILURE);
    }
    return stack[top--];
}

void pint(int line_number) {
    if (top == -1) {
        printf("L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", stack[top]);
}

int main() {
    FILE *file;
    char instruction[10];
    int value, line_number = 1;

    file = fopen("bytecodes/06.m", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    while (fscanf(file, "%s", instruction) != EOF) {
        if (strcmp(instruction, "push") == 0) {
            fscanf(file, "%d", &value);
            push(value);
        } else if (strcmp(instruction, "pint") == 0) {
            pint(line_number);
        }
        line_number++;
    }

    fclose(file);
    return 0;
}
