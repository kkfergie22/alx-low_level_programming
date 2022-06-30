#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - checks if memory is allocated properly
 * check: the check variable
 *@b: the variable passed
 *
 * Return: a pointer to the allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *check;

	check = malloc(sizeof(unsigned int) * check);

	return (check);
}
