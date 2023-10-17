#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @a:int
 * @b: int
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
