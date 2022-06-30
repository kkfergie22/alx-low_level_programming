#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - checks if memory is allocated properly
 *@b: the size of the memory
 *
 * Return: a pointer to the allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *check;

	check = malloc(sizeof(unsigned int) * b);

	if (check == NULL)
	{
		return (98);
	}

	return (check);

	free(check);
}
