/*
 * File: 100-reverse_listint.c
 * Auth: Blessings Moyo
 */

#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 *
 * @head: pointer to the address of
 * the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *head_front, *head_back;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	head_back = NULL;

	while ((*head)->next != NULL)
	{
		head_front = (*head)->next;
		(*head)->next = head_back;
		head_back = *head;
		*head = head_front;
	}

	(*head)->next = head_back;

	return (*head);
}

