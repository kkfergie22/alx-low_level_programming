#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

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
unsigned int i;
char *s;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
s = va_arg(args, char *);

if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", va_arg(args, char *));
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}

va_end(args);

printf("\n");
}
}
