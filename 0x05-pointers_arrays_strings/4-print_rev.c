#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - Entry point
 * @s:int
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int ln, i;
	
	ln = strlen(s);

	for (i = ln; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
