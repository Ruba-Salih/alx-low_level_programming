#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - Entry point
 * @dest: int
 * @src: int
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int i, len;

	for (i = 0; dest[i] != '\0'; i++);

	for (len = 0; src[len] != '\0'; len++)
	{
		dest[i + len] = src[len];
	}

	dest[i + len] = '\0';

	return dest;
}
