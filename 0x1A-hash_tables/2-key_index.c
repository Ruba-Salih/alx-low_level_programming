#include "hash_tables.h"

/**
 * key_index - Node of a hash table
 * @key: A pointer to the next node of the List
 * @size: A pointer to the next node of the List
 * Return: table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
