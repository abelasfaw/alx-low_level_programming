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
