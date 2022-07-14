#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _str_len- calculates length of a string
 * @str: string to be processed
 * Return: length of string
 */
int _str_len(const char *str)
{
	int index, len;
	char ch;

	index = len = 0;
	ch = *(str + index);
	while (ch != '\0')
	{
		len += 1;
		index += 1;
		ch = *(str + index);
	}
	return (len);
}
/**
 * add_node- adds a new node at the beginning of a list_t list
 * @head: addres of list_t type pointer
 * @str: string to use for struct
 * Return: address of new element, else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	if (*(head) == NULL)
	{
		*(head) = malloc(sizeof(list_t));
		if (*head == NULL)
		{
			return (NULL);
		}
		(*(head))->str = strdup(str);
		(*(head))->len = _str_len(str);
		(*(head))->next = NULL;
		return (*head);
	}
	else
	{
		list_t *current;

		current = malloc(sizeof(list_t));
		if (current == NULL)
		{
			return (NULL);
		}
		current->str = strdup(str);
		current->len = _str_len(str);
		current->next = *head;
		*head = current;
		return (*head);
	}
}
