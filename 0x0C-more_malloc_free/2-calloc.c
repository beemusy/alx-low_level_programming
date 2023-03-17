/*
 * File: 2-calloc.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < nmemb * size; n++)
	{
		array[n] = 0;
	}

	return (array);
}
