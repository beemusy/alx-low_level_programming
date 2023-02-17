/*
 * File: 6-print_numberz.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *        starting from 0, followed by a new line.
 *
 * Return: Always 0.
*/
int main(void)
{
	char ch = '0';

	for (ch = 0; ch < 10; ch++)
		putchar(ch);

	putchar('\n');


	return (0);
}
