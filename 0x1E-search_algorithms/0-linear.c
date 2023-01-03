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
  for (i = 0; i < size; i++)
  {
    printf("Value checked array[%ld] = [%d]\n", i, array[i]);
    if (array[i] == value)
    {
      printf("Found %d at index: %ld\n\n", value, i);
      return (i);
    }
    return (-1);
  }
}
