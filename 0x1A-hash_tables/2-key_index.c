#include <stdlib.h>
#include "hash_tables.h"
/**
 *key_index - calculates index at which to store a node
 *@key: key value of node to store
 *@size: size of hashtable
 *Return: index to store node
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
