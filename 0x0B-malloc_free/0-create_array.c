#include <limits.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array and initialises with a specific character
 *@size: size of memory
 *@c: character initialised
 *
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;
	char *s = malloc(INT_MAX);

	array = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (1);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);

}
