#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: given hash table
 * @key: key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *head, *cur, *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	cur = head = ht->array[i];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			free(cur->value);
			cur->value = strdup(value);
			return (1);
		}
		else
			cur = cur->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = head;
	ht->array[i] = new_node;
	return (1);
}
