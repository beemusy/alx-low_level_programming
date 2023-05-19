/*
 * File: 8-delete_dnodeint.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the
 * node at index index of a dlistint_t linked list.
 *
 * @head: head of linked list with node to delete
 * @index: index of the node to delete
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *previous = NULL;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	else if (previous == NULL)
	{
		*head = current->next;
	}
	else
	{
		previous->next = current->next;
	}

	free(current);
	return (1);
}
