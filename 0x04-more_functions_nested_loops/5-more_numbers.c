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
		char c = '0';

		while (c <= '14')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
