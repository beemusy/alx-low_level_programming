/*
 * File: 1-memcpy.c
 * Auth: Blessings Moyo
 */
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @src: source to copy memory
 * @dest: destination of memory copy
 * @n: number of bytes
 *
 * Return: a pointer to the memory area @s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
