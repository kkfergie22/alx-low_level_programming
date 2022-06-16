#include "main.h"
/**
 * _strncpy - copies strings
 * @dest:variable of destination
 * @src: variable of source
 * @n: variable of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/*copy first n characters of src*/
	while (i != n)
	{
		dest[j] = src[i];
		j++;
		i++;
		if (src[i] == '\0')
		{
			break;
		}
	}
	/*Add null*/
	while (j != n)
		dest[j++] = '\0';
	return (dest);
}
