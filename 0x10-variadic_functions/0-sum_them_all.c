/*
 * File: 0-sum_them_all.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: 0 when n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
