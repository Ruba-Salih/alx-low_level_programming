#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: int
 * @argv: int
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, r = 0;

	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[i]);

		if (j == 0)
		{
			printf("Error\n");
			return (1);
		}

		r += j;
	}
	printf("%d\n", r);
	return (0);
}
