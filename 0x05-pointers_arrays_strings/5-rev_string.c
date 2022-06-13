#include "main.h"

/**
 * rev_string - Reverse the string
 *
 * @s: String
 */

void rev_string(char *s)
{
	int length;
	int i;
	char reverse;

	for (length = 1; s[length]; length++)
	{}

	for (i = 0; i < length; i++, length--)
	{
		reverse = s[length - 1];
		s[length - 1] = s[i];
		s[i] = reverse;
	}
}
