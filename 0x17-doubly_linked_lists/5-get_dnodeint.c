/*
 * File: 5-get_dnodeint.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 *
 * @head: head of linked list
 * @index: position of node to be returned
 * Return: nth node of a linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		return (NULL);
	}
	else
	{
		return (current);
	}
}
