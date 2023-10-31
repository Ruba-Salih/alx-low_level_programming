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

	ar = malloc(sizeof(char) * size);
	i = sizeof(char) * size;

	while (i >= 0)
	{
		ar[i] = c;
		i--;
	}

	return (ar);
}
