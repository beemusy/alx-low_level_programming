/*
 * File: 2-strlen.c
 * Auth: Blessings Moyo
 */

#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: stringlength variable pointer
 *
 * Return: Lenghth of string
*/

int _strlen(char *s)
{
	int l = 0;

	for (*s = 0; *s != '\0'; s++)
		{
			l++;
		}

	return (l);
}
