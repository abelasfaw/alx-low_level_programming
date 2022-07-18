#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#
/**
 * listint_len- returns number of elements of listint_t type list
 * @h: pointer to listint_t type list
 * Return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	listint_t node;

	if (h == NULL)
	{
		return (0);
	}
	node = *(h);
	while (node.next != NULL)
	{
		len += 1;
		if (node.next == NULL)
		{
			break;
		}
		node = *(node.next);
	}
	len += 1;
	return (len);
}
