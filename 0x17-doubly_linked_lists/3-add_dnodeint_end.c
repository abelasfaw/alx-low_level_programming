#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end- adds new node at the end of a list
 * @head: pointer to head node
 * @n: value of new new node
 * Return: pointer of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if ((*head) == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		(*head) = new_node;
		return (new_node);
	}
	current = (*head);
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	new_node->next = NULL;
	new_node->prev = current;
	return (new_node);
}