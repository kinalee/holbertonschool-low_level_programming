#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: given hash table
 * Return: returns nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *cur;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; ++i)
	{
		if (ht->array[i] != NULL)
		{
			cur = ht->array[i];
			while (cur != NULL)
			{
				tmp = cur;
				cur = cur->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
