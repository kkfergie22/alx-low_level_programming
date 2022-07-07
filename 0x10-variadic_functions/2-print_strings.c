#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to print between each string
 * @n: number of strings to print
 * @...: strings to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
  va_list args;
  va_start(args, n);
  unsigned int i;

  for (i = 0; i < n; i++)
  {
    printf("%s", va_arg(args, char *));
    if (i < n - 1)
    {
      printf("%s", separator);
    }
  }
  va_end(args);
  printf("\n");
}
