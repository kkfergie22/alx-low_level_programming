#include <stdio.h>

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
	int a = atoi(argv[1]), b = atoi(argv[2]), product;

	/*Check if arguments are exactly two*/
	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	product = a * b;
	return (0);
}
