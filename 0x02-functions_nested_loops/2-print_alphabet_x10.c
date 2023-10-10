#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
        char alp;
	int num;

	for (num = 0; num < 10 ; num++)
	{
        	for (alp = 'a' ; alp <= 'z' ; alp++)
        	{
                	_putchar(alp);
        	}
		_putchar('\n');
	}
}
