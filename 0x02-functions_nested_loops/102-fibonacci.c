#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum, fib1, fib2, i = 0;

	fib1 = 0;
	fib2 = 1;
	sum = 0;

	printf("%d", fib1);
	printf(",");
	printf(" ");
	printf("%d", fib2);
	printf(",");
	printf(" ");

	for (i = 2; i <= 50; i++)
	{
		sum += fib1 + fib2;

		if (i != 50)
		{
			printf("%d", sum);
			printf(",");
			printf(" ");
		}
		else
			printf("%d", sum);
		fib2 = sum;
		fib1 = fib2;
	}

	return (0);
}
