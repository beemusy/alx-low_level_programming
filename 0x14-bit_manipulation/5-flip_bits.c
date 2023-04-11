/*
 * File: 5-flip_bits.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * flip_bits -returns the number of bits you
 * need to flip to get from one number to another
 *
 * @n: number to flip
 * @m: bits to flip
 * Return: number of bits you need to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	if (m == n)
	{
		return (0);
	}

	if (m > n)
	{
		for (i = 0; m > n; i++)
		{
			m = m ^ (1 << i);
		}
		return (i);
	}

	if (m < n)
	{
		for (i = 0; m < n; i++)
		{
			m = m ^ (1 >> i);
		}
		return (i);
	}
	return (0);
}
