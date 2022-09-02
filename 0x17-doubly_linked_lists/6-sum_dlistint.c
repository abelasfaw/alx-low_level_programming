#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint- calculates sum of all data of dlistint_t list
 * @head: pointer to first node of list
 * Return: 0 if list is empty, else returns sum of all data in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node;

	if (head == NULL)
	{
		return (0);
	}
	sum += head->n;
	if (head->next == NULL)
	{
		return (sum);
	}
	node = head->next;
	while (node->next != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	sum += node->n;
	return (sum);
}
