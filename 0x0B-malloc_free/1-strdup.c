#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the input string
 *
 * Return: copy
 */

char *_strdup(char *str)
{
	int j, k;
	char *copy;

	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	k++;

	copy = malloc(sizeof(*str) * k);

	if (str == NULL)
	{
		return (NULL);
	}
	else if (copy == NULL)
	{
		return (NULL);
	}

	j = 0;

	while (copy[j] != '\0')
	{
		copy[j] = str[j];
		j++;
	}

	return (copy);

}
