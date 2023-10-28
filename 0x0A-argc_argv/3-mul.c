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
	int j, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[0]);
		j = atoi(argv[1]);
		printf("%d\n", i * j);
	}
	return (0);
}
