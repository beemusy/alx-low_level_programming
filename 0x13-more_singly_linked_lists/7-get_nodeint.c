/*
 * File: 7-get_nodeint.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node
 *
 * @index: nth node
 * @head: dead of node
 * Return: value of nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}

	count = 0;

	while (head)
	{
		if (count == index)
		{
			return (head);
		}

		head = head->next;
		count++;
	}
	return (NULL);
}
