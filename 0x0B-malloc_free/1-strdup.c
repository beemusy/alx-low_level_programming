/*
 * File: 1-strdup.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *
 * @str: size of array
 * Return: NULL if size = 0
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int i, size;

	if (str == NULL)
	{
		return (NULL);
	}

		for (i = 0; str[i] != '\0'; i++)
		{
			nstr = (char *)malloc(sizeof(char) * (i + 1));
		}
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (size = 0; size <= i; size++)
		nstr[size] = str[size];

	return (nstr);

}
