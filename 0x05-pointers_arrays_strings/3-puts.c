#include "main.h"
#include <stdio.h>
/**
 * _puts - Entry point
 * @str: int
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
