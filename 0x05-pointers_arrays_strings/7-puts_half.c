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

	for (i = n; i < len; n++)
		_putchar(str[n]);
	printf("\n");

}
