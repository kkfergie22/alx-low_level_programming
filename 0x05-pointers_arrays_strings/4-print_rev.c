#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string variable
 */

void print_rev(char *s)
{
	int i;

	for (i =0; i = s[i]; i++)
	{}		

	for (; s[i]; i++)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}

