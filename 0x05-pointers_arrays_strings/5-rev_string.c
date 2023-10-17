#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - Entry point
 * @s: int
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int ln, i, tmp;

	ln = strlen(s);
	i = 0;

	while (i < ln--)
	{
		tmp = s[i];
		s[i++] = s[ln];
		s[ln] = tmp;
	}
}
