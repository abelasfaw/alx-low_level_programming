#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint- prints all elements of a list
 * @h: pointer to list
 * Return: number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	int number_of_nodes = 0;
	dlistint_t *current;

	if (h != NULL)
	{
		printf("%d\n", h->n);
		number_of_nodes += 1;
	}
	if (h->next != NULL)
	{
		current = h->next;
		while (current->next != NULL)
		{
			printf("%d\n", current->n);
			current = current->next;
			number_of_nodes += 1;
		}
		printf("%d\n", current->n);
		number_of_nodes += 1;
	}
	return (number_of_nodes);
}
