#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t print_list2(list_t *h, size_t *nodes);
/**
 * print_list- prints elements of list_t type
 * @h: pointer to list_t type list
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t number_of_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	number_of_nodes += 1;
	if (h->next == NULL)
	{
		return (number_of_nodes);
	}
	else
	{
		number_of_nodes = print_list2(h->next, &number_of_nodes);
		return (number_of_nodes);
	}
}
/**
 * print_list2- prints elemenst of list_t type recursivly
 * @h: pointer to list_t type list
 * @nodes: pointer to number of nodes
 * Return: number of nodes in list
 */
size_t print_list2(list_t *h, size_t *nodes)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		*(nodes) += 1;
		if (h->next == NULL)
		{
			return (*(nodes));
		}
		return (print_list2(h->next, nodes));
	}

}
