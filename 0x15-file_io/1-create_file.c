/*
 * File: 1-create_file.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * create_file - function that creates a file
 *
 * @filename: the file to be created
 * @text_content: text to write to file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int newfile;
	int len;
	int writefile;

	newfile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (newfile == -1)
	{
		return (-1);
	}

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (newfile);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
			writefile = write(newfile, text_content, len);
		}
		if (writefile == -1)
		{
			close(newfile);
			return (-1);

		}

	}

	close(newfile);
	return (0);
}
