/*
 * File: 100-get_endianness.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianess
 *
 * * Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int value = 1;
	char *e = (char *) &value;

	if (*e == 1)
	{
		return (1);
	}

	else
	return (0);
}
