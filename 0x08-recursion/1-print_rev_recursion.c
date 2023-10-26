#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Entry point
 * @s: char
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		/*
		 * printf("\n");
		 **/
		return;
	}

	_print_rev_recursion(s + 1);
	printf("%c", s[i]);
}
