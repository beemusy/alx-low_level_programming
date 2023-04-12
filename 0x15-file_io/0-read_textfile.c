/*
 * File: 0-read_textfile.c
 * Auth: Blessings Moyo
 */

#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 *
 * @filename: textfile to read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t len, i, rdfile;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	rdfile = open(filename, O_RDONLY);
	if (rdfile == -1)
	{
		free(buffer);
		return (0);
	}


	len = read(rdfile, buffer, letters);

	i = write(STDOUT_FILENO, buffer, len);

	close(rdfile);
	return (i);

}
