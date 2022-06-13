#include "main.h"

/**
 *puts_half - Prints half of string
 *@str: String
  */

void puts_half(char *str)
{
	int l = 0;
	char *x = str;
	int i;

	while (*x != '\0')
	{
		x++;
		l++;
	}
	if (l % 2 == 0)
	{
		i = l / 2;
	}
	else
	{
        i = (l + 1) / 2;
	}
	for ( ; i < len ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
