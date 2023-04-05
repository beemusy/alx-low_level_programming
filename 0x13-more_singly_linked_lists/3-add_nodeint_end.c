/*
 * File: 3-add_nodeint_end.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.t
 *
 * @n: number of nodes to be added
 * @head: pointer to new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = NULL;
		temp = *head;
	}
	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = temp;

	return (new);
}
