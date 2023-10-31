#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Entry point
 * @width: int
 * @height: int
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);

	int **ar;
	int i, j;

	ar = malloc(sizeof(int) * (width * height));

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);
}
