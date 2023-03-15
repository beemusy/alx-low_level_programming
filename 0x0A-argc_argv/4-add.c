/*
 * File: 4-add.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 *
 * @argc: number of command line arguments
 * @argv: array containing the program line arguments
 * Return: 1 when there is an error
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
	printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
	}

		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
	printf("%d\n", sum);
	return (0);
}
