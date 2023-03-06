/*
 * File: 2-strchr.c
 * Auth: Blessings Moyo
 */
#include "main.h"
#include <stddef.h>

/**
 * _strchr - fills memory with a constant byte
 *
 * @s: pointer to a string
 * @c: character to search for
 * 
 *
 * Return: a pointer to the first occurance of the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
