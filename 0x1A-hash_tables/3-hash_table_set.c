#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - adds element to hash table
 * @ht: pointer to hash table
 * @key: key of element to add
 * @value: value of element to add
 * Return: 1 on success, else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (strcmp(key, "") == 0)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = (char *)key;
	new_node->value = strdup(value);
	if ((char *)ht->array[index] == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
