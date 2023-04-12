/*
 * File: 9-insert_nodeint.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: head of linked list
 * @idx: index to new list
 * @n: nth node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	unsigned int count;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	
	if (idx == 0)
	{
		*head = newNode;
		return (*head);
	}


	for (count = 0; count < idx; count++)
	{
		*head = (*head)->next;
		if (count == idx)
		{
			(*head)->n = n;
			(*head)->next = newNode;
			newNode = *head;
		}
	}
	return (*head);
}


