#include "main.h"
/**
 * _isdigit - determines if a number is a digit or not
 * @c: variable of the function
 * Return: 1 if it is a digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 || c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
