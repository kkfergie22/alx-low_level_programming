#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of argumentst
 *
 * Return: 1 if error and 0 if successful
 *
 */

int main(int argc, char *argv[])
{
	int a, b, product;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	/*Check if arguments are exactly two*/
	if (argc == 3)
	{
		printf("%d\n", a * b);
	}
	else
	{
	printf("Error\n");
	return (1);
	}

	return (0);
}
