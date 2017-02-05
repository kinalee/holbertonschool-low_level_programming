#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hash_table;
	hash_node_t **ary;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	ary = malloc(sizeof(hash_node_t *) * size);
	if (ary == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->array = ary;
	for (i = 0; i < size; ++i)
		hash_table->array[i] = NULL;
	return (hash_table);
}
