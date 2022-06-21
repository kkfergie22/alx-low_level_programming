#include "main.h"

/**
 * _puts_recursion - prints a string followed
 * by a newline
 * @s: string character
 *return: nothing
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s'\n');
	_puts_recursion(++s);
}
