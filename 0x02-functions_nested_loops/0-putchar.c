#include "main.h"

/**
 * main - This program  prints _putchar followed by a newline
 *
 * Return: 0
 *
 */

int main(void)
{
	char putch[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	unsigned int c;


	for (c = 0; c < sizeof(putch); c++)
	{

		_putchar(putch[9]);

	}

	_putchar('\n');

	return (0);
}

