/*
 * File: 3-print_alphabets.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *        and then in uppercase, followed by a new line.
 *
 * Return: Always 0.
*/
int main(void)
{
	char letter;
	char LETTER;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
		putchar(LETTER);

	putchar('\n');


	return (0);
}
