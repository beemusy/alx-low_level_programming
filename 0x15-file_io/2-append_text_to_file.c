/*
 * File: 2-append_text_to_file.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - function that appends text at the end of file
 *
 * @filename: the file to be created
 * @text_content: text string to append
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int appfile, len, textwrite;

	appfile = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
	{
		return (-1);
	}

	if (appfile < 0)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
			textwrite = write(appfile, text_content, len);

			if (textwrite < 0)
			{
				return (-1);
			}
		}
	}
	close(appfile);
	return (1);
}
