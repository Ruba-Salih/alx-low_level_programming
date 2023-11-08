#include <stdio.h>
#include "function_pointers.h"
/**
 * reverse_array - Entry point
 * @name: int
 * @f: int
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f === NULL)
		return;
	f(name);
}
