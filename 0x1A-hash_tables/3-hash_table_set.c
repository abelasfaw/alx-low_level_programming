#include <stdlib.h>
#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
/**
 * create_node- creates new node for hash table
 * @key: key of new node
 * @value: value of new node
 * Return: pointer to new node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t) * 1);
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = malloc(strlen(key) + 1);
	new_node->value = malloc(strlen(value) + 1);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		return (NULL);
	}
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;
	return (new_node);
}
/**
 * hash_table_set- sets value of hash table node
 * @ht: pointer to hash table
 * @key: key of node to set
 * @value: value of node to set
 * Return: 1 on success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (key == NULL || value == NULL)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];
	if (current_node == NULL)
	{
		new_node = create_node(key, value);
		if (new_node == NULL)
		{
			return (0);
		}
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		hash_node_t *prev_node;

		while (current_node != NULL)
		{
			if (strcmp(key, current_node->key) == 0)
			{
				free(current_node->value);
				current_node->value = malloc(strlen(value) + 1);
				strcpy(current_node->value, value);
				return (1);
			}
			prev_node = current_node;
			current_node = prev_node->next;
		}
		current_node = ht->array[index];
		new_node = create_node(key, value);
		if (new_node == NULL)
		{
			return (0);
		}
		new_node->next = current_node;
		ht->array[index] = new_node;
		return (1);
	}
	return (0);
}
