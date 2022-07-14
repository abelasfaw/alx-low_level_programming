#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t list_len2(list_t *h, size_t *nodes);
/**
 * list_len- calculates number of elements of list_t type list
 * @h: pointer to list_t type list
 * Return: number of nodes in list
 */
size_t list_len(const list_t *h)
{
	size_t number_of_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	number_of_nodes += 1;
	if (h->next == NULL)
	{
		return (number_of_nodes);
	}
	else
	{
		number_of_nodes = list_len2(h->next, &number_of_nodes);
		return (number_of_nodes);
	}
}
/**
 * list_len2- calculates number of elemenst of list_t type recursivly
 * @h: pointer to list_t type list
 * @nodes: pointer to number of nodes
 * Return: number of nodes in list
 */
size_t list_len2(list_t *h, size_t *nodes)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		*(nodes) += 1;
		if (h->next == NULL)
		{
			return (*(nodes));
		}
		return (list_len2(h->next, nodes));
	}

}
