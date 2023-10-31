#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Entry point
 * @s1: int
 * @s2: int
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, j;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	ar = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ar[i] = s1[i];

	j = 0;
	while (i < len1 + len2)
	{
		ar[i] = s2[j];
		i++;
		j++;
	}
	return (ar);
}
