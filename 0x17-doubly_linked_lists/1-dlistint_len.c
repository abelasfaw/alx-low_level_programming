#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - calculates number of elements in a linked list
 * @h: pointer to first element of linked list
 * Return: number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;
	dlistint_t *current;

	if (h == NULL)
	{
		return (len);
	}
	len += 1;
	if (h->next != NULL)
	{
		current = h->next;
		while (current->next != NULL)
		{
			len += 1;
			current = current->next;
		}
		len += 1;
	}
	return (len);
}
