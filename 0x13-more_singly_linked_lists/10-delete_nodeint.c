/*
 * File: 10-delete_nodeint.c
 * Auth: Blessings Moyo
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete a node at index of a linked list
 *
 * @head: head of linked list
 * @index: position to delete node
 * Return: 1 if succeeded, or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *oldNode;
	unsigned int i = 1;

	if (!(*head))
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		for (i = 1; i < index; i++)
		{
			temp = temp->next;
			if (!temp)
			{
				return (-1);
			}
		}
		oldNode = temp;
		oldNode = oldNode->next;
		temp->next = oldNode->next;
		free(oldNode);
	}
	return (1);
}
