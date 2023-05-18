/*
 * File: 0-print_dlistint.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a linked list
 *
 * @dlistint_t: linked list to be printed
 * @h: pointer of header to be printed
 * Return: number of nodes in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
