#include "main.h"

/**
 * is_prime_number - finds a prime number
 * @n: integer variable
 *
 * Return: 1 if number is prime 0 otherwise
 */

int is_prime_number(int n)
{
	if (n % 2 == 0 || n % n == 0 || n % 1 == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
