#include "hash_tables.h"
/**
 * hash_table_create - Node of a hash table
 * @size: A pointer to the next node of the List
 * Return: table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t * table = malloc(sizeof(hash_table_t));
	if (new_tab == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
