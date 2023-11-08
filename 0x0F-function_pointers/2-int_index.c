#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Entry point
 * @array: int
 * @size: int
 * @cmp: int
 * Return: Always 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
	}

	if (i > size)
		return (-1);

	return (i);
}
