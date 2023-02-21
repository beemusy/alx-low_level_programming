/*
 * File: 3-islower.c
 * Auth: Blessings Moyo
 */

#include "main.h"


/**
  * Write a function that checks for lowercase character.
  * Returns 1 if c is lowercase
  * Return 0 for anything else
  */

/* Function _islower */

int _islower(int c)

/*function: islower*/

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
