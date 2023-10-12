#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Entry point
 * @n: int
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		while (n != 0)
		{
			_putchar('/');
			n--;
		}
	}
	_putchar('\n');
}
