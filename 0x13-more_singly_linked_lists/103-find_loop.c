/*
 * File: 103-find_loop.c
 * Auth: Blessings Moyo
 */

#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: NULL if there is no loop, address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tof, *tor;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}	

	tof = head->next;
	tor = (head->next)->next;

	while (tor)
	{
		if (tof == tor)
		{
			tof = head;

			while (tof != tor)
			{
				tof = tof->next;
				tor = tor->next;
			}

			return (tof);
		}

		tof = tof->next;
		tor = (tor->next)->next;
	}

	return (NULL);
}
