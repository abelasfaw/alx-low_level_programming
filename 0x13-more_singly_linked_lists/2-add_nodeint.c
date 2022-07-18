#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint- adds a new node at the beginning of a list_t list
 * @head: addres of list_t type pointer
 * @n: value of element to add
 * Return: address of new element, else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
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

		current = malloc(sizeof(listint_t));
		if (current == NULL)
		{
			return (NULL);
		}
		current->n = n;
		current->next = *head;
		*head = current;
		return (*head);
	}
}
