#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 9 10 times
 * _putchar - prints characterse
 *
 */
void more_numbers(void)
{
	int i = 0;
	char c;

	while (i <= 9)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
