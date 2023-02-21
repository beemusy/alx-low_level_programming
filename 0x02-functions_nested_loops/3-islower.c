/*
 * File: 3-islower.c
 * Auth: Blessings Moyo
 */

#include "main.h"


/**
  *_islower:  checks for lowercase character.
  *
  * Return: 0
  */

int _islower(int c)

/*funtrion: islower*/

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
