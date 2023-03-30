/*
 * File: 4-free_list.c
 * Auth: Blessings Moyo
 */

#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_list - frees a list_t list
 * @head: list head
 * Return: nothing
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
