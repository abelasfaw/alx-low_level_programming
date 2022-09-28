#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print- prints element of hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_node;
	int first_element = 1;

	if (ht != NULL)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index] != NULL)
			{
				if (!(first_element))
				{
					printf(", ");
				}
				printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
				if (ht->array[index]->next != NULL)
				{
					current_node = ht->array[index]->next;
					while (current_node)
					{
						printf("'%s': '%s'", current_node->key, current_node->value);
						current_node = current_node->next;
					}
				}
				if (first_element)
				{
					first_element = 0;
				}
			}
		}
		printf("}\n");
	}
}
