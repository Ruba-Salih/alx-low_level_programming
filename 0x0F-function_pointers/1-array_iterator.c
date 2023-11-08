#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Entry point
 * @array: int
 * @size: int
 * @action: int
 * Return: Always 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
