/*
 * File: 7-print_chessboard.c
 * Auth: Blessings Moyo
 */
#include "main.h"
#include <stdlib.h>

/**
 * print_chessboard - print the chessboard
 *
 * @a: pointer to array to be printed
 * Return: (0)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
				_putchar(a[i][j]);
		}
	}
}
