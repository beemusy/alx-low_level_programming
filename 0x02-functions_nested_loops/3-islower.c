/*
 * File: 3-islower.c
 * Auth: Blessings Moyo
 */

#include "main.h"


/**
  * checks for lowercase character.
  *
  * Return: 0
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
