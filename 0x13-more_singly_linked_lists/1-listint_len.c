/*
 * File: 1-listint_len.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 *
 * @h: start of node
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements;

	elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
