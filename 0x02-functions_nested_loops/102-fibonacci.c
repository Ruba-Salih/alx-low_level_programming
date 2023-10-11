#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int sum, fib1, fib2, i = 0;

	fib1 = 2;
	fib2 = 1;
	sum = 0;

	printf("%ld", fib2);
	printf(",");
	printf(" ");
	printf("%ld", fib1);
	printf(",");
	printf(" ");

	for (i = 3; i <= 50; i++)
	{
		sum = fib1 + fib2;

		if (i != 50)
		{
			printf("%ld", sum);
			printf(",");
			printf(" ");
		}
		else
			printf("%ld", sum);
		fib2 = fib1;
		fib1 = sum;
	}

	return (0);
}
