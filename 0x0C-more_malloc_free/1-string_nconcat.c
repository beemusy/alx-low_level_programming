/*
 * File: 1-string_nconcat.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @n: unsigned integer
 * @s1: string 1
 * @s2: string 2
 * Return: Pointer to the newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newmem;
	unsigned int i, len = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
		len++;
	}

	newmem = malloc(sizeof(char) * (len + 1));

	if (newmem == NULL)
	{
		return (NULL);

	}
	len = 0;

	for (i = 0; s1[i]; i++)
		newmem[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		newmem[len++] = s2[i];

	newmem[len] = '\0';

	return (newmem);
}
