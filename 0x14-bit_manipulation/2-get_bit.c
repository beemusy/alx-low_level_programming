/*
 * File: 2-get_bit.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a but at a given index
 *
 * @n: number to get value
 * @index: given index with value to return
 * Return: value of the bit at index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 64)
	{
		return (-1);
	}

	value = ((n >> index) & 1);

	return (value);
}
