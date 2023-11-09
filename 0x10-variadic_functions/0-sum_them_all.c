#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 * @n: int
 * Return: Always 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list inf;
	int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(inf, n);

	for (i = n; i > 0; i--)
		sum += va_arg(inf, int);

	va_end(inf);

	return (sum);
}
