#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * src does not need to be null terminated
 * if it contains more than n bytes
 *
 * @dest: the variable for destination string
 * @src: the variable for source string
 * @n: variable for the number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *copy = dest; /*Copy the destination string*/
	/*Find the end of the destination string*/
	while (*copy != '\0')
	{
		copy++;
	}

	/*Append characters to src until end (null of src or n != 0)*/
	while (i < n && src[i] != '\0')
	{
		dest[copy] = src[i];
		copy++;
		i++;
	}
	/*Add null character*/
	copy[i] = '\0';

	return (dest);
}