/*
 * File: 1-print_rev_recursion.c
 * Auth: Blessings Moyo
 */
#include "main.h"
/**
 * _print_rev_recursion.c - prints a string in reverse
 *
 * @s: The string that prints
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
        if (s[0] == '\0')
        {
                return;
        }
        _print_rev_recursion(s + 1);
	_putchar(s[0]);
}
