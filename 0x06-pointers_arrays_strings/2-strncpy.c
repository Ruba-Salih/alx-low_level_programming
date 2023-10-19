#include "main.h"
#include <stdio.h>
/**
 * _strncpy - Entry point
 * @dest: int
 * @src: int
 * @n: int
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}
