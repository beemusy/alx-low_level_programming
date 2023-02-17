/*
 * File: 7-print_tebahpla.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *        in reverse, followed by a new line.
 *
 * Return: Always 0.
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);

}
