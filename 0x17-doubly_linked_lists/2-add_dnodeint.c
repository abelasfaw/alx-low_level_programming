#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint- adds a new node at the beginning of a dlistint_rlist
 * @head: pointer to address of first element of list
 * @n: value of new node to add
 * Return: address of new node or null if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*(head) == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		(*head) = new_node;
		return (new_node);
	}
	(*head)->prev = new_node;
	new_node->next = (*head);
	new_node->prev = NULL;
	(*head) = new_node;
	return (new_node);
}
