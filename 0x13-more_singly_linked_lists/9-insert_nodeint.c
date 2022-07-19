#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index- returns nth node of a listint_t type list
 * @head: pointer to first node of list
 * @index: index of node to return
 * Return: nth node of list if node exists, else return 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	listint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}
	if (index == 0)
	{
		return (head);
	}
	counter = 0;
	node = head;
	while (counter < index)
	{
		if (node->next == NULL)
		{
			return (NULL);
		}
		node = node->next;
		counter += 1;
	}
	return (node);
}
/**
 * insert_nodeint_at_index- inserts a new node at a given position
 * @head: address of pointer to first element of list
 * @idx: position where new node should be added
 * @n: value of the new node
 * Return: on success address of new node, else return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev;
	listint_t *old;
	listint_t *new;

	if ((*(head)) == NULL)
	{
		return (NULL);
	}
	old = get_nodeint_at_index((*(head)), idx);
	prev = get_nodeint_at_index((*(head)), (idx - 1));
	if (old == NULL)
	{
		return (NULL);
	}
	if (prev == NULL && (n > 0))
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = old;
	if (n != 0)
	{
		prev->next = new;
	}
	return (new);
}
