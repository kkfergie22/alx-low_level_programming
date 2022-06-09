#include "main.h"
/**
 * print_line - prints a line accross the terminal
 * @n: iterator
 */

void print_line(int n)
{
	char c = 0;

	while (c <= n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
