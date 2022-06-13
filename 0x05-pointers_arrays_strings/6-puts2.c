#include "main.h"

/**
 * puts2 - Prints the characters of string
 *
 * @str: String variable
 */

void puts2(char *str)
{
	int i;
	int length;

	for (length =  0; str[length] != '\0'; length++)
	{}

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
