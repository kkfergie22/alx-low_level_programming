#include "main.h"

/**
 * print_numbers - function prints numbers
 *
 * _putchar - prints characters
 *
 * return: always 0
 *
 */

void print_numbers(void)
{
	char c;

	while c <= '9'
	{
		_putchar (c);
		c++;
	}
	_putchar('\n');
}
