#include "lists.h"
#include <stdlib.h>
/**
 * free_listint- frees memory of listint_t type list
 * @head: head of linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
