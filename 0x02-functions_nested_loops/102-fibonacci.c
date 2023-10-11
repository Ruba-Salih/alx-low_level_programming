#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum, fib1, fib2, i = 0;

	fib1 = 1;
	fib2 = 2;
	sum = 0;

	for (i = 1; i <= 50; i++)
	{
		sum = fib1 + fib2;

		if (i != 50)
		{
			printf("%d", sum);
			printf(",");
			printf(" ");
		}
		else
			printf("%d", sum);
		fib2 = fib1;
		fib1 = sum;
	}

	return (0);
}
