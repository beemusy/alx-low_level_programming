/*
* File: 2-add_dnodeint.c
* Auth: Blessings Moyo
*/

#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint -  adds a new node at the
* beginning of a dlistint_t list
*
* @head: pointer to header of list
* @n: value to add to list
* Return: address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->prev = NULL;

if (*head != NULL)
{
(*head)->prev = new_node;
}

new_node->next = *head;
*head = new_node;

return (new_node);
}
