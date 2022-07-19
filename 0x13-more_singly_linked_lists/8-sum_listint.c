#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#
/**
 * sum_listint- returns sum of all data(n) of a listint_t list
 * @head: pointer to first element of list
 * Return: sum of data(n) if list is not empty, else return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t node;

	if (head == NULL)
	{
		return (0);
	}
	node = *(head);
	while (node.next != NULL)
	{
		sum += node.n;
		if (node.next == NULL)
		{
			break;
		}
		node = *(node.next);
	}
	sum += node.n;
	return (sum);
}
