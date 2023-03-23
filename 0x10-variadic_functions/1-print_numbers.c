/*
 * File: 1-print_numbers.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: seperator to be used
 * @n: number of numbers to be printed
 *
 * Return: always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (separator == NULL)
	{
		;
	}

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, unsigned int));
				if (i < (n - 1))
					{
					printf("%s", separator);
					}
	}

	va_end(numbers);
	printf("\n");
}
