/*
 * File: 7-insert_dnodeint.c
 * Auth: Blessings Moyo
 */

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * createNode - Creates a new node for the doubly linked list
 * @n: The value to be stored in the new node
 *
 * Return: Pointer to the newly created node
 */
dlistint_t *createNode(int n)
{
dlistint_t *newNode = malloc(sizeof(dlistint_t));

if (newNode == NULL)
{
printf("Memory allocation failed.\n");
exit(EXIT_FAILURE);
}

newNode->n = n;
newNode->prev = NULL;
newNode->next = NULL;
return (newNode);
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 * doubly linked list
 * @h: Address of the head of the doubly linked list
 * @idx: Index at which the new node should be inserted
 * @n: Value to be stored in the new node
 *
 * Return: Pointer to the newly inserted node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;
	dlistint_t *current = *h;
        dlistint_t *previous = NULL;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
		
	while (current != NULL && i < idx)
	{
		previous = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	else if (previous == NULL)
	{
		new_node->next = *h;
		*h = new_node;
	}
	else
	{
		new_node->next = current;
		previous->next = new_node;
  }
