#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - Entry point
 * @str: int
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i, len, n;

	len = strlen(str);
	n = len / 2;

	if (len % 2 == 0)
	{
		for (i = n; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = n + 1; i < len; i++)
			_putchar(str[i]);
	}
	printf("\n");

}
