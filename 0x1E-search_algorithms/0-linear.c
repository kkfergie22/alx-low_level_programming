#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search- a function which searches for a value linearly
*
* @array: pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
*
* Return: the first index where the value is located
*/

int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
