#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: int
 * @c: int
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (size != 0)
	{
		ar = malloc(sizeof(char) * size);
		i = sizeof(char) * size;

		if (ar != NULL)
		{
			while (i >= 0)
			{
				ar[i] = c;
				i--;
			}
		}
		else
			return (NULL);
	}
	else
		return (NULL);

	return (ar);
}
