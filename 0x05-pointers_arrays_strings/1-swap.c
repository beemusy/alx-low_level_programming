/*
 * File: 1-swap.c
 * Auth: Blessings Moyo
 */

#include "main.h"
#include <stdio.h>

/**
 * swap_int -  swaps the values of two integers.
 * @a:integer 1
 * @b:integer 2
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

