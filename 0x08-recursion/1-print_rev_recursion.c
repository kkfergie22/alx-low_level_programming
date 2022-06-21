#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: the character string
 * return: nothing
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
