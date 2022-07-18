#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end- adds a new node at the end of a list_t list
 * @head: addres of list_t type pointer
 * @n: element of new node to add
 * Return: address of new element, else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (*(head) == NULL)
	{
		*(head) = malloc(sizeof(listint_t));
		if (*head == NULL)
		{
			return (NULL);
		}
		(*(head))->n = n;
		(*(head))->next = NULL;
		return (*head);
	}
	else
	{
		listint_t *current;
		listint_t *ptr;

		current = malloc(sizeof(listint_t));
		if (current == NULL)
		{
			return (NULL);
		}
		current->n = n;
		current->next = NULL;
		ptr = *(head);
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = current;
		return (current);
	}
}
