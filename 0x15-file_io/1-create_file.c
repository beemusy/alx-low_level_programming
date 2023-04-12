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
	FILE *newfile;

	newfile = fopen("filename.txt", "rw-------");

	if (newfile != NULL)
	{
		return (1);
	}

	if (filename == NULL)
	{
		return (-1);
	}

	fputs(text_content, newfile);

	return (0);
}
