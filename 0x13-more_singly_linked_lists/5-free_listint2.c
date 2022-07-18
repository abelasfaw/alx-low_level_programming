#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2- frees memory of listint_t type list
 * @head: head of linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*(head) != NULL)
	{
		temp = *(head);
		*(head) = (*(head))->next;
		free(temp);
	}
	head = NULL;
}
