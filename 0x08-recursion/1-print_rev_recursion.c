#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the character string
 * return: nothing
 *
 */

void _print_rev_recursion(char *s)
{
	int i, length, temp;

	if (i < length / 2)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
		i++;
		_print_rev_recursion(s);
	}
}
