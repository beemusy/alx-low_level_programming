/*
 * File: 4-clear_bit.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * clear_bit -sets the value of a bit to 0 at a given index
 *
 * @n: number to set bit at index to 0
 * @index: index of bit to set
 * Return: 1 if it worked , or -1 if an error occured
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}

	if ((*n << index) == '0')
	{
		return (1);
		}

	if ((*n << index) != '1')
	{
		*n = (*n & (~(1 << index)));
		return (1);
	}
	return (-1);
}
