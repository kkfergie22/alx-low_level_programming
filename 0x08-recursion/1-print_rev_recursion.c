#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * _strlen - gets the length of a string
 *
 * @s: the character string
 * return: nothing
 *
 */

void _print_rev_recursion(char *s)
{
	int i, length, temp;

	int _strlen(char *)
	{

		if (*s == '\0')
			return (0);
		return (1 + _strlen(++s));
	}

	length = _strlen(s);

	if (i < length / 2)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
		i++;
		_print_rev_recursion(s);
	}
}
