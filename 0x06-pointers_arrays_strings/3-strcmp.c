#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Entry point
 * @s1: int
 * @s2: int
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > S2[i])
			return s1[i] + s2[i];
		if (s1[i] < s2[i])
			return s1[i] - s2[i];
	}
}
