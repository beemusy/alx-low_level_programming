/*
 * File: 4-print_alphabt.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *        followed by a new line.
 *
 * Return: Always 0.
*/
int main(void)
{
        char letter;

        for (letter = 'a'; letter <= 'z'; letter++)
                putchar(letter);

        putchar('\n');


        return (0);
}

