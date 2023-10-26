#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Entry point
 * @x: int
 * @y: int
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	x *= _pow_recursion(x, y - 1);
	return (x);
}
