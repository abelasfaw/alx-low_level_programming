#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_delete-deletes a hash table and frees allocated memory
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_node;
	hash_node_t *next_node;

	if (ht != NULL)
	{
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index] != NULL)
			{
				if (ht->array[index]->next != NULL)
				{
					current_node = ht->array[index]->next;
					free(ht->array[index]->key);
					free(ht->array[index]->value);
					free(ht->array[index]);
					while (current_node)
					{
						next_node = current_node->next;
						free(current_node->key);
						free(current_node->value);
						free(current_node);
						current_node = next_node;
					}
				}
				else
				{
					free(ht->array[index]->key);
					free(ht->array[index]->value);
					free(ht->array[index]);
				}
			}
		}
	}
	free(ht->array);
	free(ht);
}
