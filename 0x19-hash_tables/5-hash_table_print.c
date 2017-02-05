#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: given hash table
 * Return: returns nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		tmp = ht->array[i];
		if (tmp != NULL)
		{
			if (tmp != NULL)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
