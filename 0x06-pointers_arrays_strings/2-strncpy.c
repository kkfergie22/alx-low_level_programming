#include "main.h"
/**
 * _strncpy - copies strings
 * @dest:variable of destination
 * @src: variable of source
 * @n: variable of bytes
 * return: copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	/*check to see if string is valid*/
	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}

	/*copy the string*/
	char *copy = dest;
	/*copy first n characters of src*/
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	/*Add null*/
	*dest = '\0';
	return (copy);
}
