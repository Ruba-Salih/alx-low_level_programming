#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *l = h;
	size_t len = 0;

	while (l != NULL)
	{
		len++;
		l = l->next;
	}
	return (len);
}
