#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string variable
 */

void print_rev(char *s)
{
	int i;

	while (i < s[i])
	{i++;}		

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}

