#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint- deletes head node of a listint_t type linked list
 * @head: address of head of a listint_t type linked list
 * Return: head node's data, 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if ((*(head)) == NULL)
	{
		return (0);
	}
	ptr = (*(head));
	data = ptr->n;
	(*(head)) = (*(head))->next;
	free(ptr);
	return (data);
}
