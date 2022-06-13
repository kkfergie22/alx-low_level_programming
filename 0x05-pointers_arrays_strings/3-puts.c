#include "main.h"
/**
 * _puts - puts a string followed by a new line
 * @str: string variable
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	
	}
	_putchar('\n');
}
