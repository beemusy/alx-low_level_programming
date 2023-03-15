/*
 * File: 100-change.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: number of command line arguments
 * @argv: array containing the program line arguments
 * Return: 1 if the number of arguments in not ecxatly 1
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	cents = atoi(argv[1]);

	if (cents < 1)
	{
		printf("Error\n");
	}

	if (argc < 2)
	{
		printf("Error\n");
	}

	for (cents = atoi(argv[1]); cents >= 25; cents = cents - 25)
	{
		coins++;
	}

	for (cents = atoi(argv[1]); cents >= 10; cents = cents - 10)
	{
		coins++;
	}

	for (cents = atoi(argv[1]); cents >= 5; cents = cents - 5)
	{
		coins++;
	}

	for (cents = atoi(argv[1]); cents >= 2; cents = cents - 2)
	{
		coins++;
	}

	cents = atoi(argv[1]);
	if (cents == 1)
	{
		coins++;
	}

	printf("%d\n", coins);
	return (0);

}

