#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create- creates a hash table of specified size
 * @size: size of hash table to create
 * Return: on success pointer to hashtable, else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *array;
	hash_table_t *hash_table;

	if (size == 0)
	{
		return (NULL);
	}
	array = calloc((size_t)size,  sizeof(hash_node_t *));
	if (array == NULL)
	{
		return (NULL);
	}
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = &array;
	return (hash_table);
}
