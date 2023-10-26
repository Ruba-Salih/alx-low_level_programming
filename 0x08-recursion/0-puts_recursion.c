#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Entry point
 * @s: int
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	int i;
	if (s[i] == '\0')
		return;
	printf("%c", s[i]);
	_puts_recursion(s+1);
}
