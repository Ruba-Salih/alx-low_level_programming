#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Entry point
 * @s: int
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", s[i]);
	_puts_recursion(s + 1);
}
