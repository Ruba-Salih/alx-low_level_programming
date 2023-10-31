#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Entry point
 * @str: int
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *ar;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		len = strlen(str);
		ar = malloc(sizeof(char) * len + 1);

		if (ar != NULL)
		{
			for (i = 0; i < len; i++)
			{
				ar[i] = str[i];
			}
		}
		else
			return (NULL);
	}
	return (ar);
}
