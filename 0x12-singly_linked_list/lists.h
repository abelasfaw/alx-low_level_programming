#ifndef LIST_HEADERS_H
#define LIST_HEADERS_H
#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string (malloced string)
 * @len: length of string
 * @next: points to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif
