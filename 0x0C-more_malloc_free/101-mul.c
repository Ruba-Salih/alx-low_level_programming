#include "main.h"
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
	int mul, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
