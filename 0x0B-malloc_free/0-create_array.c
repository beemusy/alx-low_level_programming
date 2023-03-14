/*
 * File: 0-create_array.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of array
 * @c: initialization of character
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
	{
		return (NULL);
	}
	else if (size > 0)
	{
		ch = malloc(size);
		for (i = 0; i < size; i++)
		{
			ch[i] = c;
		}
		return (ch);

	}
	return (0);
}
