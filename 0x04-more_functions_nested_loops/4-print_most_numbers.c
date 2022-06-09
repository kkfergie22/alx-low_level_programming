#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0-9 except 2 and 4
 * return: 0
 *
 *
 */

void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c == '2' || c == '4')
		{
			_putchar(c + '1');
		}
		c++;
	}
	_putchar('\n');
}
