/*
 * File: 6-pop_listint.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node
 *
 * @head: node to be deleted
 * Return: head data
 */
int pop_listint(listint_t **head)
{
	int hdata;
	listint_t *newNode;

	if (*head == NULL)
	{
		return (0);
	}

	hdata = (*head)->n;
	newNode = (*head)->next;
	free(*head);
	*head = newNode;
	return (hdata);
}
