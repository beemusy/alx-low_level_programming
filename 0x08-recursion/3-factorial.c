/*
 * File: 3-factorial.c
 * Auth: Blessings Moyo
 */

#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: number to get factorial
 * Return: factorial of given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
} 
