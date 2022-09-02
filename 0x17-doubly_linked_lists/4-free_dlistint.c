#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint- frees a dlistint_t list
 * @head: pointer to first node of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
	{
		exit(0);
	}
	if (head->next != NULL)
	{
		current = head->next;
		free(head);
		while (current->next != NULL)
		{
			head = current;
			current = current->next;
			free(head);
		}
		free(current);
	}
	exit(0);
}
