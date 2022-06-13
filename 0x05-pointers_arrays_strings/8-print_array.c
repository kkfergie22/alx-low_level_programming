#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an array
 * @a: String
 * @n: Number of elements of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
