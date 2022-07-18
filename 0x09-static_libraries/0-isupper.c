#include "main.h"
/**
 * _isupper - determines if a character is uppercase
 *
 * @c: the variable of the function
 *
 * Return: 1 if uppercase or 0 if not
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
