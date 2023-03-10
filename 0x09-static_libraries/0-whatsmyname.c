/*
 * File: 0-whatsmyname.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name,
 * followed by a new line
 *
 * @argc: number of command line arguments
 * @argv: array containing the program line arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
