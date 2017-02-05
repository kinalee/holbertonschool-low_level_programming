#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: given hash table
 * Return: returns nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag;
	hash_node_t *tmp;

	flag = 0;
	printf("{");
	if (ht != NULL)
	{
		for (i = 0; i < ht->size; ++i)
		{
			tmp = ht->array[i];
			if (tmp != NULL)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				flag = 1;
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
