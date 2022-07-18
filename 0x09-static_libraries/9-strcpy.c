#include "main.h"

/**
 * _strcpy -Creates a copy of a string
 * @src: The original string
 * @dest: Copy of the original string
 * Return: A copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
