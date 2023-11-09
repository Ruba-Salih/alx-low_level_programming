#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings- Entry point
 * @n: int
 * @separator: int
 * Return: Always 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list inf;
	unsigned int i;
	char *str;

	va_start(inf, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(inf, char *);
		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	printf("\n");
}
