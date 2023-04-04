/*
 * File: 2-add_nodeint.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.t
 *
 * @n: number of nodes to be added
 * @head: pointer to new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	*head = malloc(sizeof(listint_t));


	if ((*head) == NULL)
	{
		return (NULL);
	}

	(*head)->n = n;
	(*head)->next = new;
	return (*head);
}
