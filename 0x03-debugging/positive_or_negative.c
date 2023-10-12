#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * positive_or_negative - Entry point
 * @n: int
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
