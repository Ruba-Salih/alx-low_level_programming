#include "hash_tables.h"

/**
 * hash_table_get - Node of a hash table
 * @ht: A pointer to the next node of the List
 * @key: A pointer to the next node of the List
 * Return: table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (key == NULL || ht == NULL)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
