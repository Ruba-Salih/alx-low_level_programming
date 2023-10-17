#include "main.h"
#include <stdio.h>

/**
 * print_rev - Entry point
 * @s:int
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int ln, i;
	
	ln = _strlen(s);

	for (i = ln; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
