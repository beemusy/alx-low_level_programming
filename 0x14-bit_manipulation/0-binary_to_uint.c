/*
 * File: 0-binary_to_uint.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: points to a string of 0 and 1 characters
 * Return: the the converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	conv_num = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		conv_num <<= 1;
		conv_num += b[i] - '0';
	}
	return (conv_num);
}
