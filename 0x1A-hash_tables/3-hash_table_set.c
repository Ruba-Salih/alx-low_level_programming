#include "hash_tables.h"

/**
 * key_index - Node of a hash table
 * @ht: A pointer to the next node of the List
 * @key: A pointer to the next node of the List
 * @value: A pointer to the next node of the List
 * Return: table
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp_node, *node;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[index] != NULL) 
	{
		tmp_node = (ht->array)[index];
		while (tmp_node)
		{
			if (strcmp(tmp_node->key, strdup(key)) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = strdup(value);
				free(node);
				return (1);
			}
			tmp_node = tmp_node->next;
		}
		tmp_node = (ht->array)[index];
		node->next = tmp_node;
		(ht->array)[index] = node;
	}
	else
		ht->array[index] = node;

	return (1);
}
