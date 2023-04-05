/*
 * File: 8-sum_listint.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sum of all linked lists nodes
 *
 * @head: linked list head
 * Return: sum of all nodes
*/
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	sum = 0;
	while (head != NULL)
	{
		head = head->next;
		sum = sum + head->n;
	}
	return (sum);
}
