#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: String
 */
void print_rev(char *s)
{
	int length;

	for (length = 0; s[length]; length++)
	{}

	for (; s[length - 1]; length--)
	{
		_putchar(s[length - 1]);
	}
	_putchar('\n');
}
