/*
 * File: 1-args.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments
 * passed on to it
 *
 * @argc: number of command line arguments
 * @argv: array containing the program line arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
