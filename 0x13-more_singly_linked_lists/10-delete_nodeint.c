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
 * delete_nodeint_at_index - deletes node at a given index of a listint_t list
 * @head: pointer to address of first node of list
 * @index: index of node to be deleted
 * Return: 1 on success else return -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if ((*(head)) == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		if ((*(head))->next != NULL)
		{
			listint_t *next = (*(head))->next;

			free((*(head)));
			(*(head)) = next;
		}
		else
		{
			free(*(head));
			(*(head)) = NULL;
		}
		return (1);
	}
	else if (index > 0)
	{
		listint_t *old = get_nodeint_at_index((*(head)), index);
		listint_t *prev = get_nodeint_at_index((*(head)), (index - 1));

		if (old == NULL || prev == NULL)
		{
			return (-1);
		}
		prev->next = old->next;
		free(old);
		return (1);
	}
	else
	{
		return (-1);
	}
}


