/*
 * File: 0-print_listint.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t
 *
 * @h: start of node
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *pointer = NULL;
	int count = 0;

	if (h == NULL)
	{
		printf("Linked List is empty");
		return (0);
	}

	pointer = h;

	while (pointer != NULL)
	{
		printf("%d\n", pointer->n);
		pointer = pointer->next;
		count++;
	}
	return (count);
}
