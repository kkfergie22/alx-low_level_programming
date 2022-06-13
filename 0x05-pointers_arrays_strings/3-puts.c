#include "main.h"
/**
 * _puts - puts a string followed by a new line
 * @str: string variable
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (i = str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
