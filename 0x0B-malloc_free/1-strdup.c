#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the input string
 *
 * Return: copy
 */

char *_strdup(char *str)
{
	int i, j;
	char *copy;
	unsigned int length;

	length = strlen(str);

	copy = malloc(sizeof(char) * length);

	if (str == NULL)
	{
		return (NULL);
	}
	else if (copy == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		j = 0;

		while (copy[j] != '\0')
		{
			str[i] = copy[j];
			j++;
		}
		i++;
	}

	return (copy);

}
