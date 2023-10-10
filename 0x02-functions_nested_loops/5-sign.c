#include "main.h"
#include <stdio.h>
/**
 * print_sign - Entry point
 * @n: an int
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
