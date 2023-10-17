#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - Entry point
 * @str: int
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i, len;

	i = 0;
	len = strlen(str);
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	printf("\n");
}
