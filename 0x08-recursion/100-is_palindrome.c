#include "main.h"
/**
 * palind_recursive - determines if a string is a palindrome recursively
 * @start: integer variable for beginning of the string
 * @end: integer variable for end
 * @s: string variable
 *
 * Return: recursively calculate palindrome
 *
 */
int palind_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palind_recursive(s, start + 1, end - 1));
}
/**
 * _strlen_recursion - checks the length of a string
 *@s:string variable
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: string variable
 *
 * Return: 1 if string is a palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length == 0 || *s != s[length - 1])
		return (0);
	return (palind_recursive(s, 0, length - 1));
}
