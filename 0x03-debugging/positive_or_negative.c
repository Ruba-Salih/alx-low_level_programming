#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 * positive_or_negative - Entry point
 * @n: int
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int positive_or_negative(int n)
{
        int n;

        if (n > 0)
                printf("%d is positive\n", n);
        if (n == 0)
                printf("%d is zero\n", n);
        if (n < 0)
                printf("%d is negative\n", n);
        return (0);
}
