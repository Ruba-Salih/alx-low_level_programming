#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Entry point
 * @min: int
 * @max: int
 * Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{
	int *ptr, sum, i;

	if (min > max)
		return (NULL);

	sum = max - min + 1;
	ptr = malloc(sizeof(ptr) * sum);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < sum; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
