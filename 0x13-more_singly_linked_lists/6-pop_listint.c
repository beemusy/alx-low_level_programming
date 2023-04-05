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

	hdata = (*head)->n;
	head = NULL;

	return (hdata);
}
