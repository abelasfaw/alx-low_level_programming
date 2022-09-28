#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associated with a key
 * @ht: hash table to look up from
 * @key: key of node to retrieve
 * Return: value of node if key is found, else returns NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (ht == NULL)
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	if (strcmp(ht->array[index]->key, key) == 0)
	{
		return (ht->array[index]->value);
	}
	else
	{
		current_node = ht->array[index];
		if (current_node->next != NULL)
		{
			current_node = current_node->next;
			while (current_node != NULL)
			{
				if (strcmp(current_node->key, key) == 0)
				{
					return (current_node->value);
				}
				current_node = current_node->next;
			}
			return (NULL);
		}
		return (NULL);
	}
}
