#include "main.h"

/**
 * main - entry point prints alphabets
 *
 * return: 0
 *
 *
 */

int main(void)
{
	void print_alphabet(void)
	{

		char c;

		while (c != 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}

	return (0);
}
