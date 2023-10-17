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
	int len, i, tmp;

	len = strlen(s);

	for (i = 0; i < ln - 1; i++)
	{
		tmp = s[i];
		s[i] = s[ln];
		s[ln--] = tmp;
	}
}
