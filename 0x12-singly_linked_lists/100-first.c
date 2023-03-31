/*
 * File: 100-first.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>

/**
 * first - prints before the main function
 */

void first(void) __attribute__ ((constructor));

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
