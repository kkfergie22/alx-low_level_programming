#include "main.h"

/**
 * This program  prints _putchar followed by a newline
 *
 * main - entry point
 *
 * return: Always 0
 *
 */


int main(void)
{       
	char str = {"_","p","u","t","c","h","a","r"};
	int c;
	
	for (c = 0;c < sizeof(str); c++)
	{	
	_putchar(c);
        }  
	_putchar("\n");
	return (0);

}

