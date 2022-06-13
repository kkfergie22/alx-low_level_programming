#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string variable
 * Return: Integer which is the string length
 *
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
