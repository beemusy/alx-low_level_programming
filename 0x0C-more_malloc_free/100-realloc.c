/*
 * File: 100-realloc.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * realloc. - reallocates a memory block using malloc
 * @old_size: old size of memory block
 * @new_size: new size of memory block
 * 
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int i, j;

	ptr = malloc(old_size);
	newptrn = malloc(new_size);

	if (new_size > old_size)
	{
		;
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		newptr = malloc(new_size);
	}
	
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
	}

	for (i = 0; j= 0; i <= old_size; j <= new_size  i++)
	{ 
		newptr[i] = ptr[j];
	}
	
	free(ptr);
}

