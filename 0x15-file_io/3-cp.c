/*
 * File: 3-cp.c
 * Auth: Blessings Moyo
 */

#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - copies contents of a file to another file
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 on success, -1 on failure
*/
int main(int argc, char *argv[])
{
	char buffer[1024], *source_file, *dest_file;
	int copy_from, copy_to;
	size_t bytesRead, bytesWritten;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	source_file = argv[1];
	dest_file = argv[2];
	copy_from = open(source_file, O_RDONLY);
	if (copy_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", source_file);
		exit(98);
	}
	copy_to = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (copy_to == -1)
	{
		close(copy_to);
		fprintf(stderr, "Error: Can't write to file %s\n", dest_file);
		exit(99);
	}
	while ((bytesRead = read(copy_from, buffer, sizeof(buffer))) > 0)
	{
		bytesWritten = write(copy_to, buffer, bytesRead);
		if (bytesWritten != bytesRead)
		{
			close(copy_from);
			close(copy_to);
			fprintf(stderr, "Error: Write to file %s fails\n", dest_file);
			exit(99);
		}
	}
	close(copy_from);
	close(copy_to);
	return (0);
}
