/*
 * File: 2-mul.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies 2 numbers
 *
 * @argc: number of command line arguments
 * @argv: array containing the program line arguments
 *
 * Return: 1 when there is an error
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
