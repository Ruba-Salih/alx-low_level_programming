#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Entry point
 * @a: int
 * @n: int
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
        int i, tmp = 0;

        for (i = 0; i < n; i++)
        {
                tmp = a[i];
                a[i] = a[n];
                a[n--] = tmp;
        }
}
