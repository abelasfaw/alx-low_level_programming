#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index- returns nth node of a dlistint_t list
 * @head: pointer to first node of list
 * @index: index of node to get
 * Return: nth node or null if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;
	dlistint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}
	node = head;
	for (counter = 0; counter < index; counter++)
	{
		node = node->next;
		if (node == NULL)
		{
			return (NULL);
		}
	}
	return (node);
}
