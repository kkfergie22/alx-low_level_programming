#include "main.h"

/**
 *  print_alphabet_x10  - this program prints 10 times the alphabet in lowercase
 *
 *  return: 0
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 9)
	{
		print_alphabet();
		i++;
	}
	_putchar('\n');
}
