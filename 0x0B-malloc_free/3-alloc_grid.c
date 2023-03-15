/*
 * File: 3-alloc_grid.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: Pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **pnt;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	
	pnt = malloc(height * sizeof(int *));
	if (pnt == NULL)
	{
		free(pnt);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		pnt[i] = malloc(width * sizeof(int));
		if (pnt[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(pnt[i]);
			free(pnt);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			pnt[i][j] = 0;

	return (pnt);
}


