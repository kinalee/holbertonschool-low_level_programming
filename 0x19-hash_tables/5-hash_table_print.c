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

	if (ht == NULL)
		return;

	flag = 0;
	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
