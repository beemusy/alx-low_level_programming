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
	/*int writefile;*/

	newfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (newfile == -1)
	{
		return (-1);
	}

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
			write(newfile, text_content, len);
		}
	}

	close(newfile);
	return (0);
}
