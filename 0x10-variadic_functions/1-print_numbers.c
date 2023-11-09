#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers- Entry point
 * @n: int
 * @separator: int
 * Return: Always 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list inf;
	unsigned int i;
	int num;

	va_start(inf, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(inf, int);
		if (separator != NULL && i > 0)
			printf("%s", separator);
		printf("%d", num);
	}
	printf("\n");
}
