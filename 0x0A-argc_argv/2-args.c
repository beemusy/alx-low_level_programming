/*
 * File: 2-args.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: number of command line arguments
 * @argv: array containing the program line arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}

	return (0);
}
