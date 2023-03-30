/*
 * File: 0-print_list.c
 * Auth: Blessings Moyo
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the list_t list to print
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	for (s = 0; h; s++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (s);
}
