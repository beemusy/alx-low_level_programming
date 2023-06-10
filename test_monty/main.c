#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

stack_t *stack = NULL;

void push(int value)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = stack;

    if (stack != NULL)
        stack->prev = new_node;

    stack = new_node;
}

void pall()
{
    stack_t *current = stack;
    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}

int main(void)
{
    FILE *file;
    int line_number = 1;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    char opcode[10], value_str[10];
    


    int value = atoi(value_str);

    file = fopen("bytecodes/00.m", "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Failed to open bytecode file\n");
        exit(EXIT_FAILURE);
    }

    while ((read = getline(&line, &len, file)) != -1)
    {
        strcpy(opcode, strtok(line, " \t\n"));
        if (opcode == NULL || opcode[0] == '#')
        {
            line_number++;
            continue;
        }

        if (strcmp(opcode, "push") == 0)
        {
            strcpy(value_str, strtok(NULL, " \t\n"));

            if (value_str == NULL)
            {
                fprintf(stderr, "L%d: usage: push integer\n", line_number);
                exit(EXIT_FAILURE);
            }
           
            push(value);
        }
        else if (strcmp(opcode, "pall") == 0)
        {
            pall();
        }
        else
        {
            fprintf(stderr, "L%d: unknown opcode %s\n", line_number, opcode);
            exit(EXIT_FAILURE);
        }

        line_number++;
    }

    free(line);
    fclose(file);
    return 0;
}

ssize_t getline(char **lineptr, size_t *n, FILE *stream)
{
    size_t pos = 0;
    int ch;

    if (*lineptr == NULL || *n == 0)
    {
        *n = 128;
        *lineptr = malloc(*n);
        if (*lineptr == NULL)
            return -1;
    }

    while ((ch = fgetc(stream)) != EOF)
    {
        if (pos + 1 >= *n)
        {
            size_t new_size = *n + (*n >> 2);
            char *new_ptr = realloc(*lineptr, new_size);
            if (new_ptr == NULL)
                return -1;

            *lineptr = new_ptr;
            *n = new_size;
        }

        (*lineptr)[pos++] = (char)ch;

        if (ch == '\n')
            break;
    }

    if (pos == 0)
        return -1;

    (*lineptr)[pos] = '\0';
    return pos;
}
