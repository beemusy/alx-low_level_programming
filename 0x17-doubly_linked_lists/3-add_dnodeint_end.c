/*
* File: 3-add_dnodeint_end.c
* Auth: Blessings Moyo
*/

#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
*
* @head: header of linked list
* @n: integer value to be added
* Return: address of new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
printf("Memory allocation failed.");
return (NULL);
}

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
}
else
{
dlistint_t *temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
new_node->prev = temp;
}
return (new_node);
}
